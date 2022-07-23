# remover a lista de objetos

rm(list = ls ())

# Salvando no diretório 

getwd()
setwd("C:\\Users\\Carol\\Desktop\\Aula R")

# Ativar pacote

install.packages("tidyr")
library(tidyr)
library(tibble)
library(dplyr)

# Chamar base de dados 

df_regiao <- read.csv( "Alib (2).csv", encoding = "UTF-8")
View(df_regiao)

# Criar filtro 
# Faixa etária para informantes que falaram diabo

#Faixa etária I

df_faixa_etaria1 <- df_regiao %>% 
  select(Faixa.Etária,Deus.está.no.céu.e.no.inferno.está....) %>% 
  filter(grepl('diabo', Deus.está.no.céu.e.no.inferno.está...., ignore.case=TRUE))%>%
  filter(Faixa.Etária == '18 a 30 anos')
View(df_faixa_etaria1)

#Faixa etária II

df_faixa_etaria2 <- df_regiao %>%
  select(Faixa.Etária,Deus.está.no.céu.e.no.inferno.está....) %>% 
  filter(grepl('diabo', Deus.está.no.céu.e.no.inferno.está...., ignore.case=TRUE))%>%
  filter(Faixa.Etária == '50 a 65 anos')
View(df_faixa_etaria2)

#Filtro por Sexo para informantes que falaram diabo

#Feminino

df_sexo_feminino <- df_regiao %>%
  select(Sexo,Deus.está.no.céu.e.no.inferno.está....) %>% 
  filter(grepl('diabo', Deus.está.no.céu.e.no.inferno.está...., ignore.case=TRUE)) %>% 
  filter (Sexo == 'Feminino')
View(df_sexo_feminino)
count(df_sexo_feminino_MT, Sexo, Deus.está.no.céu.e.no.inferno.está....)
count(df_sexo_feminino_MT, Sexo)
#Masculino 

df_sexo_masculino <- df_regiao %>%
  select(Sexo,Deus.está.no.céu.e.no.inferno.está....) %>% 
  filter(grepl('diabo', Deus.está.no.céu.e.no.inferno.está...., ignore.case=TRUE)) %>% 
  filter (Sexo == 'Masculino')
View(df_sexo_masculino)
count(df_sexo_feminino_MT, Sexo, Deus.está.no.céu.e.no.inferno.está....)
count(df_sexo_masculino,Sexo)



#Código Resumido 


# Chamar base de dados 

df_regiao <- read.csv( "Alib (2).csv", encoding = "UTF-8")
View(df_regiao)


# Criar filtro 
# Faixa etária para informantes que falaram diabo (I e II)

df_faixa_etaria <-  df_regiao %>% 
  select(Faixa.Etária,Deus.está.no.céu.e.no.inferno.está....) %>% 
  filter(grepl('diabo', Deus.está.no.céu.e.no.inferno.está...., ignore.case=TRUE))


count(df_faixa_etaria, Faixa.Etária, Deus.está.no.céu.e.no.inferno.está....)
count(df_faixa_etaria, Faixa.Etária)

#Filtro por Sexo para informantes que falaram diabo

df_sexo <-  df_regiao %>%
  select(Sexo,Deus.está.no.céu.e.no.inferno.está....) %>% 
  filter(grepl('diabo', Deus.está.no.céu.e.no.inferno.está...., ignore.case=TRUE))

count(df_sexo, Sexo, Deus.está.no.céu.e.no.inferno.está....)
count(df_sexo, Sexo)
