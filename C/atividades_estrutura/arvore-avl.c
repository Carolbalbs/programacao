#include <stdio.h>
#include <stdlib.h>
/*int inserir();
int remover();
int buscar();
int rotacao_direita();
int rotacao_dupla_direita();
int rotacao_esquerda();
int rotacao_dupla_esquerda();
int balancear();
int fatorBalancear();
int maior();*/
typedef struct no No;
struct no
{
    int chave; 
    int altura;
    struct no* left;
    struct no* rigth;
    
};
No* raiz;
int main (){

}
int altura(struct No* no){
    if (no == NULL)
    {
        return -1;

    }else{

        return no->altura;
    }
    
}
int balancear(struct No* no){
    return labs( altura(no->left) - altura(no->right));
}

int maior(int x, int y){
    if (x > y)
    {
        return x;

    }else{

        return y;
    }
    
}
int rotacao_direita(No* raiz){
    struct No *no;
        no = (*raiz)->left;
        (*raiz)->left = no -> right;
        no->right = (*raiz);

        (*raiz)->altura1 = maior (altura(*raiz)->left),altura(*raiz)->right)+1;

        no->altura1 = maior(altura(no->left),(*raiz)->altura1)+1;
        *raiz = no; 
}
int rotacao_esquerda(){
        struct No *no;
        no = (*raiz)->right;
        (*raiz)->right = no -> left;
        no->left = (*raiz);

        (*raiz)->altura1 = maior (altura(*raiz)->left),altura(*raiz)->right)+1;

        no->altura1 = maior(altura(no->right),(*raiz)->altura1)+1;
        (*raiz) = no; 
}
void rotacao_dupla_direita(No *raiz){
    rotacao_esquerda(&(*raiz)->left);
    rotacao_direita(*raiz);
}
void rotacao_dupla_esquerda(No *raiz){
    rotacao_esquerda(&(*raiz)->right);
    rotacao_direita(*raiz);
}