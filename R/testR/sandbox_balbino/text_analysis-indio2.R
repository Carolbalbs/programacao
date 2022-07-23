rm(list = ls())

# setwd("C:\\Users\\Carol\\Documents\\Documentos Carol\\LABHD\\internetlab2022\\sandbox_balbino")
# getwd()
library(tidyverse)
library(dplyr)
library(tidytext)
library(widyr)
library(tm)
library(igraph)
library(ggplot2)
library(forcats)
library(lubridate)
library(stringr)
# install.packages("tidyverse")

frame <- read.csv(file = 'sandbox_balbino/indio.csv',
                  encoding = "UTF-8")


frame_filter <-  frame %>%  
                 select(message_text,
                        message_date)

stopword <- tm :: stopwords("pt")
stopword2 <-  c('?','https','youtu.be','bolsonaro', 'ser', 'vai', 'twitter.com','q','www.youtube.com')

# Tokens and  frequencies  words

message_tokens <- frame_filter %>%
    distinct(message_text, .keep_all = TRUE) %>% # Retirando os varios iguais
    unnest_tokens(word, message_text) %>% 
    count(word, sort = TRUE) %>% 
    filter(!word %in% stopword) %>% 
    filter(!word %in% stopword2) %>% 
    filter(!is.na(word))


# Tokens - frequencies texts and groups  

message_graph <- frame_filter %>% 
  mutate(group = seq(1, nrow(.))) %>% 
  unnest_tokens(word, message_text) %>% 
  filter(!word %in% stopword) %>% 
  filter(!word %in% stopword2) %>% 
  filter(!is.na(word))

# Contagem

count_frame <- 
    message_graph %>% 
    pairwise_count(word, group, sort = TRUE)%>% 
    filter(item1 == 'vacina') %>% 
    arrange(-n)

## Correlaçao

word_cors <- message_graph %>%
  group_by(word) %>%
  filter(n() >= 20) %>% # retirando casos muito raros
  pairwise_cor(word, group, sort = TRUE) # faz correlação

### Juntando para ter ideia de combinações recorrentes
### e com alta correlação

word_join <- count_frame %>% 
  left_join(word_cors)
