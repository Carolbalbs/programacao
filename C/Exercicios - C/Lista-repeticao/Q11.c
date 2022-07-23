#include<stdio.h>
#include<stdlib.h>
/*
 A série de Fibonacci é formada pela seqüência 0,1,1,2,3,5,8,13,21,34,55,... Faça um
programa que gere a série até que o valor seja maior que 500.
*/
/*
1.Inicialmente fazer os prints da logica fibonacci antes de coloca-la em loop
Segundo a regra fibonacci a soma dos dois ultimos termos resultam o termo seguinte
2. Partindo dessa premissa declarei duais variaveis que aguardam o dois termos anteriores nomeando-os de 'penultimo' e 'ultimo'
3. Em seguida declarei uma variavel inteira chamada 'fibonacci' essa variavel guarda o resultado da soma que revela o termo seguinte (ela inicia com 0 devido a operação de adição que sera realizada dentro dela)

*/
/*
   Definir o contador até 500 ja estabelecendo que ele seria a condição de parada, comparando-o com fibonacci 
*/
//variavel fibonacci(que resulta o termo seguiinde) guardando o resultado da operação dos termos anteriores  
//É importante se atentar para uma coisa:
// A relação de ultimo e penultimo é absolutamente relativa. Por quê?
/* 
Quando tratamos da sequencia 1, 2, 3, 5
  consideramos que: 
  - o numero 1 se trata do penultimo.
  - o numero 2 se trata do ULTIMO em relação     
    ao numero 1.
  - o resultado fibonacci é o numero 3.
  Porém...
   Se continuarmos a sequencia é possivel perceber que:

  - o numero 2 passa a ser o PENULTIMO termo em relação ao numero 3. 
  
  E se o numero 2 agora é PENULTIMO quem passará a esse o ULTIMO termo ?

  - o numero 3, que anteriormente foi o resultado fibonacci agora passa a ser chamado de ULTIMO termo. 
  - sendo assim o resultado fibonacci agora passa a ser o numero 5.
 
  .
Traduzido isso para codigo basicamente :
1. penultimo é igual a ultimo (penultimo = ultimo)
2. fibonacci é igual a ultimo (ultimo = fibonacci) 
*/
int main (){
    int penultimo = 0;
    int ultimo = 1;
    int fibonacci = 0;
    
  printf("\n\n--TESTANDO A LOGICA CODIFICADA--\n\n");

    fibonacci = penultimo + ultimo;
    printf("penultimo : %i\n\n", penultimo);
    printf("ultimo : %i\n\n",ultimo);
    printf("fibonacci : %i\n\n",fibonacci);
    

printf("\n\n--TESTANDO A LOGICA PARA ACHAR UM NOVO TERMO SEGUINTE--\n\n");

    penultimo = ultimo;
    ultimo = fibonacci;
    fibonacci = penultimo + ultimo;
    printf("penultimo : %i\n\n", penultimo);
    printf("ultimo : %i\n\n",ultimo);
    printf("Novo termo fibonacci : %i\n\n",fibonacci);

   //Colocando a sequencia em laço de repetiçao 
   printf("\n\n--TESTANDO A LOGICA CODIFICADA DENTRO DO LACO FOR--\n\n");
   printf("\n\n--------------------------------\n\n");
   printf("\n\n--RESULTADO DA LOGICA DENTRO DO LACO FOR--\n\n");
   /*
   A comparação do contador tem que ser feita exatamente com os resultados obtidos atraves do calculo fibonacci.
   500 não é o numero do contador, ele é a condição de parada estabelecida.. Ou seja até que o calculo 
   */ 
   for (int cont = 0; fibonacci < 500; cont++)
   {
      printf("\n fibonacci : %i\n\n", fibonacci);
      fibonacci = penultimo + ultimo;
      penultimo = ultimo;
      ultimo = fibonacci; 
   }
   //printf("cont : %i\n\n", cont);
   
    return 0; 
}