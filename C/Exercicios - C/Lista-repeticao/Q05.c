#include<stdio.h>
#include<stdlib.h>

int main (){
    float nota; 
    float soma = 0;
    int contador = 0;
    float media;

    while (contador <= 4)   
    {
        printf("Digite o suas notas \n");
        scanf("%f", &nota);
        contador = contador + 1; 
        soma = soma + nota ; 
        media = soma / 5;
    }

     printf("A media das suas notas e: %.2f\n", media);
    
    return 0; 
}