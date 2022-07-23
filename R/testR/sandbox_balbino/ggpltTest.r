library(ggplot2)
library(tidyverse)

tidyverse_update()


install.packages(c("broom", "dplyr", "ggplot2", "haven", "httr", "magrittr", "rlang", "tibble"))

ggplot2::mpg
?mpg

# criando um ggplot com mpg

ggplot(data = mpg)+
  geom_point(mapping = aes(x = displ, y = hwy, color = class))+
  facet_wrap(~ class, nrow = 2)#criando subgraficos

# template basico ggplot
#ggplot(data = <FRAME>)+
 # <GEOM_FUNCTION>(mapping = aes(<MAPPINGS>))     
?facet_wrap
?facet_grid

#Entendendo melhoe geom

ggplot(data = mpg)+
  geom_smooth(mapping = aes(x = displ, y = hwy, linetype = drv))

ggplot(data = mpg)+
  geom_point(mapping = aes(x = displ, y = hwy))

#geoms diferentes em um mesmo codigo
ggplot(data = mpg, mapping = aes(x = displ, y = hwy))+
  geom_point(mapping = aes(color = class))+
  geom_smooth()

#smooth separando variaveis sem facetas por um filter
 
ggplot(data = mpg, mapping = aes(x = displ, y = hwy))+
  geom_point(mapping = aes(color = class))+
  geom_smooth(
    data = filter(mpg, class == "subcompact"),
    se = FALSE
  )
      
?se

ggplot(data = mpg, 
       mappinng = aes(x = displ, y = hwy, color = class))+
       geom_point()+
       geom_smooth(se = FALSE)
  
## ------------------ EXERCICIOS -------------

#1

ggplot(data = mpg, 
       mapping = aes(x = displ, y = hwy, linetype = class ))+
    geom_point(color = "black")+
    geom_smooth(se = FALSE)

#2

ggplot(data = mpg, 
       mapping = aes(x = displ, y = hwy, linetype = class ))+
  geom_point(color = "black")+
  geom_smooth(se = FALSE)

#3

ggplot(data = mpg)+
  geom_point( mapping = aes(x = displ, y = hwy,color = alpha))+
  geom_smooth()
               
               
## GRAFICO DE BARRAS 


ggplot(data = diamonds)+
  geom_bar(mapping = aes(x = cut))

#mudando stat padrao no geom_bar()


demo <- tribble(
  ~a,     ~b,
  "bar_1", 20,
  "bar_2", 30,
  "bar_3", 40
)

ggplot(data = demo)+ 
  geom_line(mapping = aes(x = a, y = b), stat = "identity")
               

?geom_bar
?stat_summary              
?stat_smooth             

ggplot( data = diamonds)+
  geom_bar(mapping = aes(x = cut, color = cut))

ggplot (data = diamonds)+
  geom_bar(mapping = aes(x = cut, fill = cut))
  
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             
             

