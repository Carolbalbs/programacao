#include<stdio.h>
#include<stdio.h>

/*
10. Faça um programa que tenha uma função que calcula o imc de uma pessoa, para
isso a função deve receber como parâmetro o peso, a altura e o sexo. A função deve
retornar o valor de imc.
*/
float imc (float p, float a);
int main(){

 float altura;
 float peso;
    
    printf("O calculo do seu imc e : %.3f", imc(peso, altura));

 return 0;
}

float imc (float p, float a){
    
   printf("Digite seu peso  : ");
   scanf("%f", &p);
   printf("Digite sua altura : ");
   scanf("%f", &a);
    
   return p /( a * a );
    
}