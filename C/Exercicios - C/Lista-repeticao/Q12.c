#include<stdio.h>
#include<stdlib.h>
/*
Faça um programa que calcule o fatorial de um número inteiro fornecido pelo
usuário. Ex.: 5!=5.4.3.2.1=120. A saída deve ser conforme o exemplo abaixo:
Exemplo de Saída:
Fatorial de: 5
5! = 5 . 4 . 3 . 2 . 1 = 120
*/
int main (){
  int fatorial;
  int multiplic = 1;
    printf("Digite um numero\n");
    scanf("%i", &fatorial);
    
   for (int cont = 1; fatorial >= cont ; cont++)
   {
       
    multiplic = multiplic * cont;  
    printf("%d", cont );
   }
   printf("\n------------------------------");
   printf("\nO numero fatorial de %i e : %i\n",fatorial ,multiplic);
    // printf("nao entrou no laco\n"); 
    return 0; 
}