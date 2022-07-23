from math import radians, sin, cos, tan
angulo = int(input('Digite o valor do angulo: '))



seno = sin(radians(angulo)) 
cosseno = cos(radians(angulo))
tangente =tan(radians(angulo))

print(f'O valor das medidas são: \n Seno :{seno:.2f} \n Cosseno :{cosseno:.2f} \n Tangente :{tangente:.2f}')