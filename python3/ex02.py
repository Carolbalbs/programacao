Q1, Q2, Q3 = input().split()
E1, E2, E3 = input().split()

Q1 = int(Q1)
Q2 = int(Q2)
Q3 = int(Q3)
E1 = int(E1)
E2 = int(E2)
E3 = int(E3)

cacadas_total = Q1 + Q2 + Q3
ovos_env = E1 + E2 + E3
total_ovos = cacadas_total - (ovos_env*3) 
print(total_ovos)