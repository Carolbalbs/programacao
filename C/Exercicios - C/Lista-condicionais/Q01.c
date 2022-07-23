#include<stdlib.h>
#include<stdio.h>

int main(void){
    
    float numero1, numero2;
    printf("Digite um numero\n");
    scanf("%f", &numero1);
    printf("Digite um numero novamente\n");
    scanf("%f", &numero2);
    if (numero1 > numero2 )
    {
        printf("O numero maior e: %.2f", numero1);
    }else if (numero2 > numero1)
    {
        printf("O numero maior e: %.2f", numero2);
    }else
    {
        printf("Numero invalido");
    }
    
    
    
    return 0;
}