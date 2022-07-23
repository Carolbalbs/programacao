from sys import float_repr_style


metros = float(input('Digite o valor em metros para realizar a conversão : '))

centimetro = metros  / 0.01
milimetros = metros / 0.001

print('O resultado do valor {} de metros em centimetros e: {}'.format(metros, centimetro), end =' ')
print('e o resultado do valor {} metros em milimetros e: {}'.format(metros, milimetros))