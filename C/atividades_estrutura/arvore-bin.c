#include <stdio.h>
#include <stdlib.h>



typedef struct no No;
typedef struct item Item;
struct item{
    int cod;                
};

struct no{
    Item item;
    struct no *esquerda;
    struct no *direita;
};
Item itemCreate(int cod);
No *vazia();
No *insert();
void print(No *raiz);
void livre(No *raiz);
int main (){

    No *raiz = vazia(); 
    raiz = insert(raiz, itemCreate(10));
    print(raiz);
    livre(raiz);
    print(raiz);
    livre(raiz);
    return 0;
}
No*vazia() {
    return NULL;
}
No*insert(No*raiz, Item x){
//if com raiz vazia aloca o ponteiro auxiliar no no e os esquerda e direita estão vazios pois o no inserido é o primero, logo a raiz
    if (raiz == NULL)
    {
        No*aux = (No*)malloc(sizeof(No));
        aux -> item = x;
        aux -> esquerda = NULL;
        aux -> direita = NULL;

        return aux;
      
Item itemCreate(int cod){
   Item*item;
   cod = item.cod;
    return item;
}
void print(No*raiz){
    if (raiz != NULL)
    {
        printf("%d n/", *raiz-> item.cod);
        print( raiz-> esquerda);
        print( raiz-> direita);
    }
    
}
void livre(No*raiz){
    if (raiz == NULL)
    {
        
       livre( raiz-> esquerda);
       livre( raiz-> direita);
       livre(raiz);
    }
    
}

/*
else{
        if (x.cod > raiz->Item.cod)
        {
            raiz->direita = insert(raiz->direita, x)
        }else if (x.cod < raiz->Item.cod)
        {
            raiz->esquerda = insert(raiz->esquerda, x)
        }
        
    }

*/