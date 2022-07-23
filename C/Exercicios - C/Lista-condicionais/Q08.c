#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
Faça um programa que calcule as raízes de uma equação do segundo grau, na
forma ax2 + bx + c.
*/
int main(void){

    int a, b, c, delta, raiz1 ,raiz2;
    printf("Digite o valor de a\n");
    scanf("%i", &a);
    
    printf("Digite o valor de b\n");
    scanf("%i", &b);

    printf("Digite o valor de c\n");
    scanf("%i", &c);
    
    delta = b*b - 4 * a * c;
    raiz1 = (-1 * b + sqrt(delta))/(2 * a);
    raiz2 = (-1 * b - sqrt(delta))/(2 * a);
   

    if (a == 0)
    {
        printf("A equacao nao e de segundo grau.\n");

    } else if ( delta < 0){
         
         printf("Valor de delta :%i\n", delta);
         printf("A equacao nao possui raizes reais.\n");
         
  
        } else if (delta == 0 ){     

            printf("A equacao possui apenas uma raiz real : %i\n", raiz1);

        } else if (delta > 0){

            printf("A equacao possui duas raizes reais: %i %i\n\n", raiz1 , raiz2);

        } else {
        
            printf("ERRO");

        }
        
        

    
    
    return 0;
}