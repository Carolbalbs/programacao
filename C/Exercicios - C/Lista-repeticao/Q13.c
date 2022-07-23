#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
Faça um programa que leia 5 números e informe o maior número.
 */
int main (){

  int nMaior = -INFINITY; 
  int num;
  // o menor dos numero digitado continara sendo maior que o menos infinito
 //variavel 'num' dentro do if compara os numeros inseridos um de cada vez a cada repetição 
 //Num é maior que nMaior ? Sim pq a variavel nMaior apesar do nome, inicialmente esta guardando o menor dos valores, dessa forma a condiçao do if é atendida e ele faz a comparação a cada vez que o loop do laço pede um numero inteiro novamente. 
  for (int i = 1; i <= 5; i++)
  {
      printf("Digite um numero inteiro\n");
      scanf("%i", &num);
      
      if ( num > nMaior){

            nMaior = num;
       }
      
  }
    printf("O maior numero entre eles e: %i\n\n", nMaior);  

    return 0; 
}