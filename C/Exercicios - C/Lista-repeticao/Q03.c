#include<stdio.h>
#include<stdlib.h>

int main (){
    int numero;
    int contador = 0; 
    int soma = 0;
 
  while (contador <= 3 )
  {
      
      printf("Digite um numero \n");
      scanf("%i", &numero);
      contador = contador + 1;
      soma = soma + numero ;
   /*
   
    *NUNCA DEVO ATUALIZAR UMA VARIAVEL LIDA DENTRO DE UM LAÇO  

    */   
  }
  /*
    NUMERO    CONTADOR 
      -           0
      2           1
      4           
      5           2
      10

  */
  printf("A soma dos numeros e: %i \n", soma);

    return 0; 
}