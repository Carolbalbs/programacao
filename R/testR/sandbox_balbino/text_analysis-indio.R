rm(list = ls())

setwd("C:\\Users\\Carol\\Documents\\Documentos Carol\\LABHD\\internetlab2022\\sandbox_balbino")
getwd()
library(wordcloud)
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
 install.packages("wordcloud")

frame <- read.csv(file = 'indio.csv',
                  encoding = "UTF-8")


frame_filter <-  frame %>%  
                 select(message_text,
                        message_date)

stopword <- tm :: stopwords("pt")
stopword2 <-  c('?','https','youtu.be','bolsonaro', 'ser', 'vai', 'twitter.com','q','www.youtube.com')

# Tokens and  frequencies  words

message_tokens <- frame_filter %>%
    distinct(message_text, .keep_all = TRUE) %>% 
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
  pairwise_count(word, group, sort = TRUE) %>% 
  filter(item1 == 'vacina') %>% 
  arrange(-n)

# Correlacao

word_cors <- message_graph %>%
  group_by(word) %>%
  filter(n() >= 20) %>% # retirando casos muito raros
  pairwise_cor(word, group, sort = TRUE) 

word_join <- count_frame %>%  
  left_join(word_cors)


#word-cloud das palavras mais correlacionadas com vacina


word_join %>% 
  count(item2)%>%
  with(wordcloud(item2, n, max.words = 100))

# Linha do tempo 


message_graph %>% 
  filter(word == 'vacina') %>% 
  mutate(data == message_date, "day") %>% 
  group_by(data) %>% 
  summarise(quantidade = n()) %>% 
  ggplot(aes(x = data, y = quantidade)) %>% 
  geom_point(shape= 21, color = 'black', fill = "#69b3a2", size = 6) +
  ggtitle(("Linha do tempo"))
