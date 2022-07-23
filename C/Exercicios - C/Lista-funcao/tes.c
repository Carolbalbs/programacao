#include <stdlib.h>
#include <stdio.h>

int main() {
    float numero; 
    int cont = 0;
     float soma;
    
    while (numero <= 10 )
    {
    printf("digite um numero ");
    scanf("%f", &numero);
        cont = cont + 1 ;  
    printf("%i\n", cont);
    soma = numero + soma;
    
    
    }
    printf("%f\n", soma);
    return 0;
}
