salario = float(input('Digite o valor do seu salario atual: '))

acrescimo = salario * 0.15
acrescimofinal = salario + acrescimo

print(f'Parabens!! você recebeu um aumento de 15% e agora o valor do seu novo salario e: R${acrescimofinal:.2f} reais')