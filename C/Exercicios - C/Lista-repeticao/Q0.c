#include<stdio.h>
#include<stdlib.h>
/*
1 mes tem 31 dias 
o estudo começa no dia 21-06 
e termina em 75 dias 
qual em que data vai terminar ?

dia 21 - respresenta o primeiro dia para o contador

repita 75 vezes a partir no numero 21

*/
int main (){
    int num; 
        
        scanf("%i", &num);
    int dias = 0;    
    for(int cont = 21; cont <= 95 ; cont++){
        dias = dias + 1;
        //printf("%i\n", cont);
    }
        printf(" %i dias\n", dias);
    return 0; 
}