
# Meta para vendas de soverte

estimativaSorvete <- c(150, 290, 370, 410, 503)

# Venda de sorvete em relação a temperatura
vendasSorvete <- data.frame(bolasSorvete = c(200, 300, 400, 500, 600),   
                            Temperatura = c(20,  25,  27,  30,  32))    


colnames(vendasSorvete) <- c("Qtd.Sorvete","Temperatura")

#Como o data.frame() possui duas colunas o R assume como sendo as cordenadas do eixo X e Y.

ggplot(data = vendasSorvete, aes(x = Temperatura, y = Qtd.Sorvete, groupo = estimativaSorvete )) + geom_line(color = "red")+ geom_point()




