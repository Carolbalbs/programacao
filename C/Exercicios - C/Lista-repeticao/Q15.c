#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
Faça um programa que leia 5 números e informe o maior, menor e a média dos
números.
*/
int main (){
    int nMenor = + INFINITY;// comparado com o maior dos numeros o numero digitado sempre era menor
    int nMaior = - INFINITY;// comparado com o menor dos numeros o numero digitado sempre era maior 
    int num;
    int soma = 0;
    int media; 
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro\n");
        scanf("%i", &num);
        if (num > nMaior )
        {   
            nMaior = num;
             // nMenor torna-se o numero digitado
  
        }
        if (num < nMenor)
        {
            nMenor = num;
        }
        
        soma = soma + num; 
  
    }
        media = soma / 5;
    printf("O maior numero entre eles e: %i\n\n", nMaior);  
    printf("O menor numero entre eles e: %i\n", nMenor);
    printf("A media entre eles e: %i\n", media);
    return 0; 
}