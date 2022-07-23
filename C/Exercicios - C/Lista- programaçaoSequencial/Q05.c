#include<stdlib.h>
#include<stdio.h>

int main(){
    
    float metros, centimetros;

    printf("Insira os dados em metros para converter em centimetros\n");
    scanf("%f", &metros);
    
    centimetros = metros * 100;
    
    printf("O valor de cm e: %.3f", centimetros);
    return 0;
}