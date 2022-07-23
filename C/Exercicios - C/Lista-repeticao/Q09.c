#include<stdio.h>
#include<stdlib.h>
/*
Supondo que a população de 
um país A seja da ordem de 80000 habitantes 
com uma taxa anual de crescimento de 3% (entrada) 

e que a população de B seja 200000 habitantes
com uma taxa de crescimento de 1.5%  (entrada)

Faça um programa que calcule e
escreva o número de anos (print = saida) necessários para que 

a população do país A 
ultrapasse ou iguale 
a população do país B,(condiça de parada) 
mantidas as taxas de crescimento.
enquanto A for menor que B repita o calculo de A.
calcule a populacao A, enquanto A for menor que B. 
*O total da taxa de crescimento de B tambem precisar estar dentro do laço*
*/

// Usando while

int main (){
    int popA = 80000;
    int popB = 200000;
    float taxaCresA = 0.03;
    float taxaCresB = 0.015;
    int ano = 0;
// tava contando ano 1 mas ano precisava começar com 0 ja que o incremento se tratava de uma soma
//
//Me confundi na parte da condição mas era tudo culpa dos prints e da variavel ano.

// quando a popoulacao B deixar de ser MAIOR ou igual a populacao A fim do laço
   // while (popB >= popA ) - Essa condição tambem pode ser executavel

// quando a popoulacao A deixar de ser MENOR ou igual a populacao B fim do laço
    
    while (popA <= popB )

    { 
        popB = popB + ( popB * taxaCresB);
        popA = popA + ( popA * taxaCresA);
        ano = 1 + ano ; 
    }
    printf("Populacao de A : %i habitantes\n", popA); 
    printf("Populacao de B : %i habitantes\n", popB); 
    printf("Levara %i anos\n", ano);
    return 0; 
}

//Usando for

int main (){
int popA = 80000; 
int popB = 200000;
float taxaCresA = 0.03;
float taxaCresB = 0.015;
int ano = 0;   
    
for ( ano ; popA <= popB; ano++)
{
        popB = popB + ( popB * taxaCresB);
        popA = popA + ( popA * taxaCresA);
         
}
    printf("Populacao de A : %i habitantes\n", popA); 
    printf("Populacao de B : %i habitantes\n", popB); 
    printf("Levara %i anos\n", ano);
}