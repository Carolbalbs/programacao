# Lista 01
# E, T =  input().split()
# E = int(E)
# T = int(T)
# V = (E // T)
# #V = int(V)
# print(V)

a,b,c,d,e = input().split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
e = int(e)
total_naves = a - ( b + c + d + e)
print(total_naves)

a = input('Digite algo: ')

print('O tipo primitivo desse valor e : ', type(a))
print('Ele e numerico? ', a.isnumeric())
print('Ele e alfabetico? ', a.isalpha())
print('Ela e um alfanumerico? ', a.isalnum())
print('Esta em maiusculo? ', a.isupper())
print('Esta minusculo? ', a.islower())

