largura = float(input('Insira a largura da parede que voce deseja pintar '))
altura = float(input('Agora insira a altura da parede que voce deseja pintar '))

area = largura * altura 


tinta_litro = area / 2 

print(f'Sera necessario {tinta_litro:.2f} litros de tinta para pintar a sua parede ')