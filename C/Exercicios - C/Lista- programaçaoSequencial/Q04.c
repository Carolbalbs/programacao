#include<stdio.h>
#include<stdlib.h>

int main (void){

    float nota1, nota2, nota3, nota4, media;

    printf("Digite o valor da nota 1 \n");
    scanf("%f", &nota1); 

    printf("Digite o valor da nota 2 \n");
    scanf("%f", &nota2);

    printf ("Digite o valor da nota 3 \n");
    scanf("%f", &nota3);

    printf("Digite o valor da nota 4 \n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Sua media e: %.2f", media);

    return 0;
}