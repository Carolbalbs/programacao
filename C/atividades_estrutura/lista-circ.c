#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Desenvolver um programa C para gerenciar uma fila de espera para um escritório.

  O programa deve:
  a cada novo cliente, solicitar seu nome e informar um número de senha aleatório. -ok 

  O nome junto com o número de senha devem ser inseridos em uma fila circular com alocação sequencial, com no máximo 20 posições de memória. 
  
  Cada posição armazena os dados (número e nome) de um cliente. 
 
  As inserções são sempre realizadas no final da fila. 
 
  O programa deve também oferecer a opção de indicar o próximo cliente a ser atendido. 
  
  Neste caso deve retirar o primeiro elemento da fila circular, e informa o número e nome do cliente. 
  
  O programa deve também oferecer uma opção de finalização.
*/
#define TAMANHO 20

int itens[TAMANHO];
int primeiro_e = -1, ultimo_e = -1;

void clean_buffer();
void instrucao(void);
int cheia();
int vazia();
void enQueue(int elemento);
int deQueue();
void display();

int main()
{

  char nome[TAMANHO];
  int menu;
  menu = instrucao();
  printf("Digite seu nome e uma senha: \n");
  fgets(nome, TAMANHO, stdin);
  nome[strcspn(nome, "\n")] = '\0';
  for ( int i = 0; i < nome; i++)
  {
    instrucao();
  }
  
  //senha 14 maria valentina

  printf(">>>>>>PROXIMO CLIENTE<<<<<<\n %s", nome);
  return 0;
}
void clean_buffer()
{
  char c;
  do
  {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

void instrucao(void){
  int escolha;
  printf(">>>>>MENU<<<<<\n"
  "Digite o numero para realizar o que deseja\n"
  "1. INCLUIR NOME NA FILA \n"
  "2. REMOVER NOME NA FILA\n"
  "3. FINALIZAR PROGRAMA\n");
  scanf("%i", &escolha);
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