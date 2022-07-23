import random

aluno1 = str(input('Digite o numero de um aluno '))
aluno2 = str(input('Digite novamente um nome do aluno '))
aluno3 = str(input('Por favor precisaremos do nome de mais um aluno '))
aluno4 = str(input('Precisaremos do nome de mais um aluno '))

sorteio = [aluno1,aluno2,aluno3,aluno4]
random.shuffle(sorteio)
print (f'A ordem da apresentação é : {sorteio} ')