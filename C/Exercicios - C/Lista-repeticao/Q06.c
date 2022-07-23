#include<stdio.h>
#include<stdlib.h>

// Usando while

int main (){
    int numero_1;
    int numero_2; 
    int cont;

    printf("Digite um numero \n");
    scanf("%d", &numero_1);
    
    
    printf("Digite um numero que faca um intervalo de pelo menos 1 numero entre o primeiro digitado anteriormente \n");
    scanf("%d", &numero_2);

    cont = numero_1 + 1;
    printf("O intervalo entre os numeros e: \n");
    while (cont < numero_2)
    {

        printf("%d \n", cont );
        cont = cont + 1;
       
        
    }
       
    return 0; 
}

// Usando for 

int main (){
    int numero ; 
    int numero_2;
    int cont  ;
     
      printf("Digite um numero \n");
      scanf("%d", &numero);
        
    
      printf("Digite um numero que faca um intervalo de pelo menos 1 numero entre o primeiro digitado anteriormente \n");
      scanf("%d", &numero_2);
      
      cont =  numero + 1;
      printf("Os intervalos entre %d e %d sao :\n", numero, numero_2);
      for ( cont  ;  cont < numero_2; cont++)
     {
          
        
         printf(" %d\n",cont);

     }
     

    return 0;
}

// Usando do while 

int main (){

    int num;
    int num_2;
    int cont;

    printf("Digite um numero inteiro\n"); 
    scanf("%d", &num);

    printf("Digite um numero inteiro novamente esse numero precisa ter um intervalo de pelo menos um numero em relacao ao numero anterior\n"); 
    scanf("%d", &num_2);

    cont = num + 1;
    printf("O intervalo entre %d e %d e: \n", num, num_2);
    do
    {
        printf("%d\n", cont);
        cont = cont + 1;
        
    } while (cont < num_2);
    
}