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
#define tam_palavra 30
#define TAMANHO 20

char itens[TAMANHO][tam_palavra];
int primeiro_e = -1, ultimo_e = -1;

int instrucao();
int cheia();
int vazia();
void enQueue(char elemento[tam_palavra]);
int deQueue();
void display();

int main()
{
  char nome_senha[tam_palavra];
  strcpy(nome_senha,"");
  int i,menu;
    
  for (i = 0; i < TAMANHO; i++)
  {
      if(menu==1)
      {
          printf("\nDigite a senha e o nome do Cliente:: \n\n");
        scanf("%[^\n]",nome_senha);getchar();
        enQueue(nome_senha);
        display();
      }
      else if(menu==2)
      deQueue();
      else if(menu==3)
      break;
      
      menu = instrucao();
  }
  return 0;
}

int instrucao()
{
  int escolha;
  printf("\n>>>>>MENU<<<<<\n"
  "Digite o numero para realizar o que deseja\n"
  "1. INCLUIR CLIENTE NA FILA \n"
  "2. ATENDER UM CLIENTE DA FILA\n"
  "3. FINALIZAR PROGRAMA\n\n");
  scanf("%i", &escolha);getchar();
  
  return escolha;
}

// Checar se a fila esta cheia
int cheia()
{
  if ((primeiro_e == ultimo_e+1) || (primeiro_e==0 && ultimo_e == TAMANHO - 1))
  return 1;
  
  return 0;
}

//checar se a fila esta vazia
int vazia()
{
  if (primeiro_e == -1)
  return 1;
  
  return 0;
}

// Adiciona um elemento
void enQueue(char elemento[tam_palavra])
{
  if (cheia())
  printf("\n A fila esta cheia!! \n");
  else
  {
    if(primeiro_e==-1)
    primeiro_e = 0;
    
    ultimo_e = (ultimo_e + 1) % TAMANHO;
       
    strcpy(itens[ultimo_e],elemento);
    
    printf("\n  Cliente %s inserido na Fila\n", itens[ultimo_e]);
  }
}

// Removendo um elemento
int deQueue()
{
  char elemento[tam_palavra];
  
  if (vazia())
  {
    printf("\n A fila esta vazia !! \n");
    return (-1);
  }
  else
  {
      strcpy(elemento,itens[primeiro_e]);
      
    if (primeiro_e == ultimo_e)
    {
      primeiro_e = -1;
      ultimo_e = -1;
    } 
    else
    primeiro_e = (primeiro_e + 1) % TAMANHO;
    
    printf("\n O cliente %s foi atendido\n", elemento);
    printf("\n O proximo cliente da fila eh %s\n", itens[primeiro_e]);
    
    display();
  }
}
// Mostrar fila
void display()
{
  int i;
  if (vazia())
  printf(" \n  A Fila esta vazia\n");
  else
  {
    printf("\n  Primeiro da fila -> %s\n", itens[primeiro_e]);
    printf("\n  Fila de Espera:\n");
    
    for(i = primeiro_e; i != ultimo_e; i = (i + 1) % TAMANHO)
    printf("  %s\n", itens[i]);
    
    printf("  %s", itens[i]);
    
    printf("\n\n  Ultimo da fila -> %s \n", itens[ultimo_e]);
  }
}