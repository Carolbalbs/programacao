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
        printf("O programa está encerrado! \n");
      break;
      }else 
        printf("Esse numero é invalido! \n");
        
      choice = menu();
      
     
  }
  return 0;
}
int menu()
{
  int choice;
  printf("\n>>>>>choice<<<<<\n"
  "Digite o numero correspondete a operacao desejada\n"
  "1. INCLUIR UM CLIENTE NA FILA \n"
  "2. ATENDER A UM CLIENTE DA FILA\n"
  "3. FINALIZAR O PROGRAMA\n\n");
  scanf("%i", &choice);getchar();
  system("cls");
  return choice;
}
void insertion(){
  char input[WORD_LENGTH];
  strcpy(input,"");
    if ((first == 0 && end ==SIZE_VETOR-1)||(end+1==first))
    {
        printf("A lista ja esta cheia! \n");
    }else
    {   
      
  	printf("\nPor favor, digite a senha e o nome do Cliente:: \n\n");
	  scanf("%[^\n]",input);getchar();
  	
    if(first==-1)
    first = 0;
    
    end = (end + 1) % SIZE_VETOR;
       
    strcpy(queue[end],input);
    
    system("cls");
    
    printf("\n  Cliente %s inserido na fila\n", queue[end]);
  
    }
    
    
}
void delete(){
    char input[WORD_LENGTH];
    strcpy(input,"");
    if (first == -1)
    {
        printf("A fila ainda esta vazia!\n");
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
            printf("\n O proximo cliente da fila é %s\n", queue[first]);
            
            output();   
        }
        
        
    }
    
    
}
void output(){
    
 int i;
 if (first==1 && end == -1){

     printf(" \n  A Fila ainda esta vazia!\n");
  }else
  {
    printf("\n  Primeiro da fila -> %s\n", queue[first]);
    printf("\n  Fila de espera:\n");
    
    for(i = first; i != end; i = (i + 1) % SIZE_VETOR)
    printf("  %s\n[%d]", queue[i], i);
    
    printf("  %s  [%d]", queue[i], i);
    printf("\n\n  Ultimo da fila -> %s \n", queue[end]);
  }
   
 }
