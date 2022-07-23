#operadores aritmeticos : +-*/**//%
#ordem de precedencia : 1 - () 2 - ** 3- * / // % 4 - + - 

#nome = input('Qual seu nome? ')
#print('Prazer em te conhecer {:^20}'.format(nome))

#n1 = int(input('Digite um numero: '))
#n2 = int(input('Digite outro numero: '))

#s = n1 + n2
#m = n1 * n2
#d = n1 / n2
#di = n1 // n2
#r = n1 % n2
#p = n1 ** n2

#print('O resultado dos operadores aritmeticos e: {} {} {} {} {} {} '.format(s, m, d, di, r, p))

#DESAFIO

numero = int(input('Digite um numero para saber o seu antecessor : '))

antecessor = numero - 1
sucessor = numero + 1

print('O antecessor do numero  {} e o numero: {}'.format(numero, antecessor))
print(f'e o seu sucessor é {sucessor}')