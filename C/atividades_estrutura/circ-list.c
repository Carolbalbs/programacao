#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LENGTH 35
#define SIZE_VETOR 20

char queue[SIZE_VETOR][WORD_LENGTH];
int first = -1, end = -1;

int menu();
void insertion();
void delete(); 
void output();

int main(){

  char input[WORD_LENGTH];
  strcpy(input,"");
  int choice;
  
  choice = menu();

  for (;;)
  {  
        
      if(choice==1)
      {
        insertion(input);
        output();
      }else if(choice==2){

        delete();
      }else if(choice==3){
        printf("Programa encerrado!! \n");
      break;
      }else 
        printf("Numero invalido!! \n");
        
      choice = menu();
      
     
  }
  return 0;
}
int menu()
{
  int choice;
  printf("\n>>>>>choice<<<<<\n"
  "Digite o numero para realizar o que deseja\n"
  "1. INCLUIR CLIENTE NA FILA \n"
  "2. ATENDER UM CLIENTE DA FILA\n"
  "3. FINALIZAR PROGRAMA\n\n");
  scanf("%i", &choice);getchar();
  system("cls");
  return choice;
}
void insertion(){
  char input[WORD_LENGTH];
  strcpy(input,"");
    if ((first == 0 && end ==SIZE_VETOR-1)||(end+1==first))
    {
        printf("A lista esta cheia! \n");
    }else
    {   
      
  	printf("\nDigite a senha e o nome do Cliente:: \n\n");
	  scanf("%[^\n]",input);getchar();
  	
    if(first==-1)
    first = 0;
    
    end = (end + 1) % SIZE_VETOR;
       
    strcpy(queue[end],input);
    
    system("cls");
    
    printf("\n  Cliente %s inserido na Fila\n", queue[end]);
  
    }
    
    
}
void delete(){
    char input[WORD_LENGTH];
    strcpy(input,"");
    if (first == -1)
    {
        printf("A fila esta vazia\n");
    }else
    {
        strcpy(input,queue[first]);
        if (first == end)
        {
            first = -1, end = -1;
        }else if (first == SIZE_VETOR-1)
        {
                first = 0;
        }
        else
        {
            first++;
            printf("\n O cliente %s foi atendido\n", queue[first]);
            printf("\n O proximo cliente da fila eh %s\n", queue[first]);
            
            output();   
        }
        
        
    }
    
    
}
void output(){
    
 int i;
 if (first==1 && end == -1){

     printf(" \n  A Fila esta vazia\n");
  }else
  {
    printf("\n  Primeiro da fila -> %s\n", queue[first]);
    printf("\n  Fila de Espera:\n");
    
    for(i = first; i != end; i = (i + 1) % SIZE_VETOR)
    printf("  %s\n[%d]", queue[i], i);
    
    printf("  %s  [%d]", queue[i], i);
    printf("\n\n  Ultimo da fila -> %s \n", queue[end]);
  }
   
 }
