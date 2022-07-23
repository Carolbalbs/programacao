#include <stdio.h>
#include <stdlib.h>

void mostrar(int* lista, int tamanho);
int opcao_deletar(int* lista, int tamanho);
int pega_posicao(int value, int* lista, int tamanho);
int deletar(int alvo, int* lista, int tamanho);

void main()
{
	
  int i,tamanho,valor;	
	
  printf("\nInforme o tamanho da lista: ");
  scanf("%i",&tamanho);		
	
  int lista[tamanho];
  
  for(i=0;i<tamanho;i++)
  {
  	 printf("\nInforme o [%i] numero da lista: ",i+1);
  	 scanf("%i",&valor);
  	 lista[i]=valor;
  }
  printf("\n");
  
  mostrar(lista, tamanho);
  printf("\n");
  
  opcao_deletar(lista, tamanho);
}

int opcao_deletar(int* lista, int tamanho)
{
    int alvo, continuar;
    
    printf("\n\nDeseja deletar um valor? Digite 1 para Sim e 0 para Nao:\n");
    scanf("%i", &continuar);
    
    if(continuar==1)
    {
    	printf("\nInforme o elemento a ser deletado: ");
    	scanf("%i", &alvo);
    	tamanho = deletar(alvo, lista, tamanho);
    	opcao_deletar(lista,tamanho);
	}
    else if(continuar==0)
	return 0;
	else
	opcao_deletar(lista,tamanho);
}

void mostrar(int* lista, int tamanho)
{
  int i;
  printf("\nLista atual: \n");
  for (i = 0; i < tamanho; i++)
  {
    printf("%i", lista[i]);
    if(i != (tamanho - 1))
	printf(" | ");
  } 
}

int pega_posicao(int alvo, int* lista, int tamanho)
{
  int i;
  for (i = 0; i < tamanho; i++)
  {
    if (lista[i] == alvo)
	return i;
  }  
  
  return -1;  
}

int deletar(int alvo, int* lista, int tamanho)
{
   int busca;
   int posicao = pega_posicao(alvo, lista, tamanho);
   if (posicao != -1)
   {
     for(busca=posicao;busca<(tamanho - 1);busca++)
	 lista[busca] = lista[busca + 1]; 
     
     tamanho--;
   }
   else
   printf("Valor nao contido na lista.!\n");
   
   mostrar(lista, tamanho);
   return tamanho;
}


