#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


#define MaxTam = 25;
typedef struct clienteNo cliente;
 struct clienteNo{
    int numeroId, prioridade;
    char nomeCliente[MaxTam];
    cliente *seguinte, *anterior;
};
  cliente *inicio;   
  cliente *fim;
  cliente* pont;
  cliente* new;   
  int tamanho, anterior, proximo;   

int main (){

return 0;
}
int busca(int id){
    
    fim = ptlista->back;
    if (id <= ultimo-> chave)
    {
       pont = inicio;
       while (pont-> chave < id)
       {
           pont = pont-> next;
           busca = pont;
       } 
    }
    else
    {
        busca = inicio;
    }
    
}
void insert(){
    
    pont = busca(id);
    if(pont->chave != id){
        anterior = pont-> ant;
        ocupar(new)
        new-> chave;
        new-> ant;
        new-> prox;
        anterior-> prox = new ;
        pont-> ant = new;
        if (id < inicio->chave)
        {
            inicio = pont;
      }
        else
        {
            printf("sem elemento");
        }
        
    }

}
void remove(){
    if (pont ->chave)
    {
        anterior = pont ->ant;
        proximo = pont -> next;
        anterior->next = proximo; 
        proximo-> back = anterior;
        if (pont = inicio)
        {
            inicio = proximo;
            desocupar(pont)
        }
        
    }else
    {
        printf("elemento nao achado");
        
    }
    
    
}