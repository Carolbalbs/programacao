# Venda de sorvete em relação a temperatura
vendasSorvete <- data.frame(bolasSorvete = c(200, 300, 400, 500, 600),   # Quantidade de sorvetes
                            Temperatura = c(20,  25,  27,  30,  32))    # Temperatura

# Nomes da colunas
colnames(vendasSorvete) <- c("Qtd.Sorvete","Temperatura")

# Visualiza data.frame
vendasSorvete
#Como o data.frame() possui duas colunas o R assume como sendo as cordenadas do eixo X e Y.

# Cria gráfico de pontos
plot(vendasSorvete)
Gráfico vendas sorvete.jpg
No entanto, é possível declarar as coordenadas individualmente

# Cria gráfico de pontos
plot(x = vendasSorvete$ Temperatura,  # Eixo X com a temperatura
     y = vendasSorvete$ Qtd.Sorvete)  # Eixo Y com a quantidade de sorvetes
Adicionando linhas
Adiciona linha entre os pontos
lines(x = vendasSorvete$Temperatura,
      y = vendasSorvete$Qtd.Sorvete,
      col = "red")

# Venda de sorvetes que havia sido estimada
estimativaSorvete <- c(150, 290, 370, 410, 503)

# Adiciona linha entre os pontos
lines(x = vendasSorvete$Temperatura,
      y = estimativaSorvete,
      col = "blue")
