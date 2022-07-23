// Circular Queue implementation in C

#include <stdio.h>

#define TAMANHO 5

int itens[TAMANHO];
int primeiro_e = -1, ultimo_e = -1;


int cheia();
int vazia();
void enQueue(int elemento);
int deQueue();
void display();

int main() {
  int numero[TAMANHO];
  int i = 0, escolha;
 
 while(i < TAMANHO) {
   printf("\n>>>>>escolha<<<<<\n"
  "Digite o numero para realizar o que deseja\n"
  "1. INCLUIR CLIENTE NA FILA \n"
  "2. ATENDER UM CLIENTE DA FILA\n"
  "3. FINALIZAR PROGRAMA\n\n");
  scanf("%i", &escolha);
  if(escolha==1)
      {
          printf("\nDigite a senha  \n\n");
        scanf("%i",&numero);
        enQueue(numero);
        display();
      }
      else if(escolha==2)
      deQueue();
      else if(escolha==3)
      break;
  }
  return 0;
}
// Checar se a fila esta cheia
int cheia() {
  if ((primeiro_e == ultimo_e + 1) || (primeiro_e == 0 && ultimo_e == TAMANHO - 1)) return 1;
  return 0;
}

//checar se a fila esta vazia
int vazia() {
  if (primeiro_e == -1) return 1;
  return 0;
}

// Adiciona um elemento
void enQueue(int elemento) {
  if (cheia())
    printf("\n A fila esta cheia!! \n");
  else {
    if (primeiro_e == -1) primeiro_e = 0;
    ultimo_e = (ultimo_e + 1) % TAMANHO;
    itens[ultimo_e] = elemento;
    printf("\n Inseriu -> %d", elemento );
  }
}

// Removendo um elemento
int deQueue() {
  int elemento;
  if (vazia()) {
    printf("\n A fila esta vazia !! \n");
    return (-1);
  } else {
    elemento = itens[primeiro_e];
    if (primeiro_e == ultimo_e) {
      primeiro_e = -1;
      ultimo_e = -1;
    } 
    // Q has only one element, so we reset the 
    // queue after dequeing it. ?
    else {
      primeiro_e = (primeiro_e + 1) % TAMANHO;
    }
    printf("\n Elemento deletado  -> %d \n", elemento);
    return (elemento);
  }
}

// Display da fila
void display() {
  int i;
  if (vazia())
    printf(" \n A Fila esta vazia\n");
  else {
    printf("\n primeiro_elemento -> %d ", primeiro_e);
    printf("\n itens -> ");
    for (i = primeiro_e; i != ultimo_e; i = (i + 1) % TAMANHO) {
      printf("%d ", itens[i]);
    }
    printf("%d ", itens[i]);
    printf("\n ultimo_elemento -> %d \n", ultimo_e);
  }
}