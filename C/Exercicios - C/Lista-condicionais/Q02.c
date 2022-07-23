#include<stdlib.h>
#include<stdio.h>

int main(void){

    float numero;
    printf("Insira um numero qualquer\n");
    scanf("%f", &numero);

    if (numero < 0)
    {
        printf("O valor desse numero e negativo");
    }else if (numero <= 0.00)
    {
        printf("O valor desse numero e um decimal");
    }else
    {
        printf("O valor desse numero e positivo ");
    }
    
    
    return 0;
}