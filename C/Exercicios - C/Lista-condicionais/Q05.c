#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void){
    
    float nota1, nota2, media;
    printf("Digite duas notas para descobrir se passou de ano\n");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2.00;
    if (media >= 10 ) 
    {
        printf("Aprovado com distincao");
    }else if (media >= 7 && media < 10)
    {
        printf("Aprovado");

    }else
    {
       printf("Reprovado");
    }
    
    return 0;
}