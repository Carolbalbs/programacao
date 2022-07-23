#include<stdio.h>
#include<stdio.h>

/*
Faça um programa, com uma função que necessite de um argumento inteiro. A função retorna o valor de caractere ‘P’, se seu argumento for positivo, e ‘N’, se seu argumento for zero ou negativo.
*/
int argumento (int argment);
int main(){

        int numeroInt; 
        
        printf(" Insira um numero inteiro :");
        scanf("%i", &numeroInt);
        argumento (numeroInt);
 return 0;
}
int argumento (int argment){

    if (argment > 0 )
    {
        printf("P");
        return argment;
    }else if (argment <= 0)
    {   printf("N");
        return argment;
    }
    
    
    
}