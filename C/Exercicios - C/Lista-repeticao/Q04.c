#include<stdio.h>
#include<stdlib.h>

int main (){
    int numero;
    int soma = 0;
    int contador = 0; 
/*
Repetição controlada por sentinela é frequentemente chamada de repetição indefinida, porque o número de repetições não é conhecido antes de o loop começar a ser executado.
*/
    while (numero != -1 )
    {
      printf("Digite um numero qualquer \n");
      scanf("%i", &numero);
      soma = soma + numero;
      contador = contador + 1;
      

    }
        printf("A soma e: %i \n ", soma);
    
    return 0; 
}