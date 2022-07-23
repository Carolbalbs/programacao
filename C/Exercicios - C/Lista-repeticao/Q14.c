#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
Faça um programa que leia 5 números e informe o menor número.
*/
//O maior dos numeros digitados será menor ao valor guardado inicialmente. 
//Num é menor que nMenor ? Sim pq a variavel nMenor apesar do nome, inicialmente esta guardando o maior dos valores, dessa forma a condiçao do if é atendida e ele faz a comparação a cada vez que o loop do laço pede um numero inteiro novamente. 
int main (){
    int nMenor = + INFINITY;
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro\n");
        scanf("%i", &num);
        if (num < nMenor )
        {
            nMenor = num;
        }
        
    }
    printf("O menor numero entre eles e: %i\n", nMenor);
    
    
    return 0; 
}