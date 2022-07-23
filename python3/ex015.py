distancia = float(input('Quantos Km de distancia o carro percorreu?' ))
dias = int(input('Por quantos dias ele estava alugado? '))

precototal = (distancia * 0.15) +( dias * 60)

print(f'O valor do aluguel foi R$ {precototal} reais')
