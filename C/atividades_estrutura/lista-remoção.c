#include <stdio.h>
#include <stdlib.h>
/*
OBJETIVOS

Implementar em C um programa que efetue a remoção de nós (elementos) em uma lista linear com alocação remota

O programa deve criar: 

uma lista implementada em um vetor com 20 elementos: ok
 
atribuir os 20 elementos à lista. ok

O programa principal deve executar um loop que :

irá solicitar ao usuário a digitação 
de um número a ser removido da lista - ok
chamar a função de remoção

depois perguntar ao usuário se ele deseja remover outro número. 

O loop termina quando o usuário não mais desejar continuar a fazer remoções. ok 

A função de remoção deve :
verificar se existem elementos na lista, 
se o número indicado pelo usuário está na lista, e então fazer a remoção. ok

A função deve informar ao usuário se a remoção foi concluída, -ok

se o elemento não foi encontrado na lista, -ok

se a lista estiver vazia. -ok
*/


int busca (int x, int *lista, int m);
int listaRemocao (int valor_a_remover, int*lista, int m);
void lista_view (int *lista, int m);

int main (){
  int m = 20;
  int lista[20] = {12, 3, 6, 24, 1, 45, 18, 13, 33, 67, 2, 11, 5, 9, 21, 23, 5, 7, 34, 85};
  int remocao;
  int numero_remocao;
  int escolha; 
  remocao = listaRemocao(numero_remocao, lista, m ); 
  lista_view(lista, m);
do
{
  printf("Digite um numero que voce deseja remover\n");
  scanf("%i", &numero_remocao);
  m = listaRemocao(remocao, lista, m);
  printf("%i\n", listaRemocao(remocao, lista, m));
  

  printf("Deseja remover um numero novamente? (0)sim (1)nao\n");
  scanf("%i", &escolha); 
      if (escolha == 0)
    {
        lista_view(lista, m);
    }  
    
} while (escolha == 0);
}

int busca(int num, int *lista, int m){
	int i;
	for ( i = 0; i < m; i++)
    {
        if (lista[i] == num)
		return i;
    }
		return -1;      
}

int listaRemocao (int valor_a_remover, int*lista, int m){
    int indice;
    indice = busca(valor_a_remover, lista, m);
  
        if (indice != -1)
        {
            for ( int i = indice; i < (m - 1); i++)
            {
                lista[i] = lista[i + 1];           
            }
            printf("A remocao foi concluida com sucesso\n");
            return m;
        }
        else {
            printf("Elemento não se encontra na tabela\n"); 
            return 0;  
        }
    }
 
 void lista_view (int *lista, int m){
        printf("Observe a lista\n{");
        for (int i = 0; i < m; i++)
        {
            printf("%i", lista[i]);
            if (m != (m -1)) printf(", ");
        }
            printf("}\n");
        }
        
        


/*
PSEUDOCODIGO

se n != 0 então
índice := busca(x)
se índice != 0 então
valor-recuperado := L[índice]
para i := índice, n-1 faça
L[i] := L[i+1]
n := n - 1
senão “elemento não se encontra na tabela”
senão underflow
n = no a ser removido
m = tamanho do vetor
*/