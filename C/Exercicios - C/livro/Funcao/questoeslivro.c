#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Cabeçalho de uma função : 
tipo-valor-retorno nome-função (lista-parametros){
                   _
    definições      | Corpo da
    instruções     _| função ou bloco
}
*/
/*
int main (){
   double c1 = 13.0;
   double d = 3.0;
   double f = 4.0;
printf("%2.f" , sqrt(c1 + d * f ));
return 0 ; 
}
*/
int square(int y1); /*Prótotipo de função*/
int maximum (int x1, int y, int z);
int main (void){
    int x; 
    int num1;
    int num2;
    int num3;
    printf("Digite 3 numeros inteiros:\n");
    scanf("%d%d%d" ,&num1, &num2, &num3 );
    printf("Quadrado e: \n ");
    for ( x = 2; x <= 10 ; x++)
    {
       printf(" %d ", square(x));/*Chamada de função*/
    }
    printf("\nO maior numero entre os 3 e: %d ", maximum(num1, num2, num3));
    
}
int square (int y1 ){
   
    return y1*y1;/*Retorna o quadrado de Y como um inteiro*/
}    
int maximum(int x1, int y, int z){

    int max = x1;

    if (y > x1 && y > z)   
    {
        max = y;
        
    }else if (z > x1 && z > y)
    {
    
        max = z;
        
    }
    return max;
    
    

}    
