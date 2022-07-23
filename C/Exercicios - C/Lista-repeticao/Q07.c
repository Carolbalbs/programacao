#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
    
    int numero;
    int multipicacao;
printf("Digite um numero de 1 a 10 \n ");
        scanf("%i", &numero);
    for ( int contador = 0; contador <= 10; contador++)
    { 
        
        multipicacao = numero * contador;
        
        printf("%d x %d = %d \n", numero , contador , multipicacao);
    }
    
    return 0; 
}