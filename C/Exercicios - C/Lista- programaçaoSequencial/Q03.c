#include<stdio.h>
#include<stdlib.h>



int main (void){

    
    float numero1, numero2; 

        printf("Digite um numero:");
        scanf("%f", &numero1);
        printf("Digite novamente um numero:");
        scanf("%f", &numero2);
    
    float soma;
    soma = numero1 + numero2;
        printf("A soma entre os dois e:\n %.2f", soma);
return 0; 
}