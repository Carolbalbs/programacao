#include<stdio.h>
#include<stdlib.h>
/* quem repete é a base - para multiplicar a quantidade de vezes que determinou o expoente */
int main (){
    int base;
    int expoente;
    int multiplique = 1; 
     
//Meu codigo anterior dava erro porque eu estava tratando o meu expoente como contador mas na verdade ele deveria ser apenas uma condição de parada
   printf("Digite a base\n ");     
   scanf("%d", &base);  
   printf("Digite o expoente\n"); 
   scanf("%d", &expoente);
   for (int contador = 1; contador <= expoente; contador++)
   {
       multiplique = multiplique * base;
       
   }
   printf("O resultado e: %d\n", multiplique); 

   return 0;
    /*    
        int contador = 0;
        int numero;
        while (contador <= 10)
        {
        contador = contador + 1;
        printf("%d \n", contador);
            
        }

    int numero;
    //int multiplique;
        printf("Digite o numero \n");
        scanf("%d", &numero);
        printf("Contador:\n");
     for (
    //declaracao de variavel
     int contador = 0;
    // condição de parada 
     contador <= numero; 
    //incremento
     contador++) 
    
      {
     // multiplique  o numero pelo contador
       // multiplique = numero * contador;
        printf(" %d \n", contador);
      }*/
     
}