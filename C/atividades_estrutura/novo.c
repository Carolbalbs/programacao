#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam_palavra 30
#define TAMANHO 5

char itens[TAMANHO][tam_palavra];
int primeiro_e = -1, ultimo_e = -1;


int cheia();
void enQueue(char elemento[tam_palavra]);
int deQueue();
void display();

int main()
{
  char nome_senha[tam_palavra];
  strcpy(nome_senha,"");
  int escolha;
    
 while (1)
  {
    printf("Digite um numero para realizar o que deseja \n");
    printf("\n1.Para inserir na fila\n 2. Para remover a fila\n 3.Para sair\n");
    scanf("%i", &escolha);

        switch (escolha)
        {
        case 1:
            printf("\nDigite a senha e o nome do Cliente:: \n\n");
            scanf("%[^\n]",nome_senha);getchar();
            enQueue(nome_senha);
            display();
            break;
        
        case 2:
            deQueue();
            break;

        case 3:
            exit(0);
            break;
        default:
        printf("VALOR DIGITADO INVALIDO\n"); 
        getchar();
       
  }
}



// Checar se a fila esta cheia
int cheia()
{
  if ((primeiro_e == ultimo_e+1) || (primeiro_e==0 && ultimo_e == TAMANHO - 1))
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
  
  if (primeiro_e ==-1 && ultimo_e ==-1)
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
  if (primeiro_e ==-1 && ultimo_e ==-1){

    printf(" \n  A Fila esta vazia\n");

  }else
  {
    printf("\n  Primeiro da fila -> %s\n", itens[primeiro_e]);
    printf("\n  Fila de Espera:\n");
    
    for(i = primeiro_e; i != ultimo_e; i = (i + 1) % TAMANHO)
    printf("  %s\n", itens[i]);
    
    printf("  %s", itens[i]);
    
    printf("\n\n  Ultimo da fila -> %s \n", itens[ultimo_e]);
  }
}