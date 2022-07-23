#include<stdio.h>
#include<stdlib.h>
/*
Faça um programa que peça 10 números inteiros,
calcule e mostre 
a quantidade de números pares e 
a quantidade de números ímpares.
*/
int main (){
    
    int num; 
    int cont = 1;
    int contI = 0;
    int contP = 0;
    for (cont = 1; cont <= 5; cont++)
    {
        printf("Digite um numero inteiro\n");
        scanf("%i", &num);
        
        
            if ( num %2 != 0)
            {
                contI = contI + 1;    
                printf("Numero impar : %i\n", num); 
            }

             else  
            {
                contP = contP + 1;
                printf("Numero par: %i\n", num);
            }  
      
    }
    
    printf("Quantidade de numeros pares inseridos: %i\n",contP);
    printf("Quantidade de numeros impares inseridos: %i\n",contI );
        
    return 0; 
}