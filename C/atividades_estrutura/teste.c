#define tamanho 6
#define linha 4
#define coluna 5

#include <stdio.h>
#include <stdlib.h>



int main (){

    int vetor[tamanho];
    char matriz[linha][coluna];
    printf("\n>>VETOR<<\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o numero para posicao do vetor\n");
        scanf("%d%*c", &vetor[i]);
    }
    printf("\nVetor preenchido\n");
    printf(" | ");
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d | ", vetor[i]);
    } 
    

    printf("\n>>MATRIZ<<\n");
    for (int i = 0; i < linha; i++)
    {
       for (int j = 0; j < coluna; j++)
       {
           printf("Digite um numero para preencher a matriz[%d,%d]\n", i+1, j+1);
           scanf("%c%*c", &matriz[i][j]);
       }
    }
    printf("RESULTADO\n");
    for (int i = 0; i < linha; i++)
    {   
        printf(" | ");
       for (int j = 0; j < coluna; j++)
       {
           printf("%c | ", matriz[i][j]);
           
       }
       printf("\n");
    }
}