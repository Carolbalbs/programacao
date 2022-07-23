#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct cliente *Cliente;

struct cliente{
   int prioridade, numeroId;
   char nomeCompleto[5];
   struct cliente *antPtr;
   struct cliente *proxPtr;
};
int input (); 
int main (){

    Cliente cadastro;
   
     int menu;
    while (1){ 

        menu = input();
        
        
        switch (menu){

        case 1:
           
            printf(" %s \n", cadastro->nomeCompleto);
            printf(" voce vai para o final da fila e seu numeroID e: %d\n", cadastro->numeroId = rand()% 100);
            break;
        case 2:
            
            printf("Voce vai para o meio da fila e seu numeroId e: %d\n", cadastro->numeroId = rand()% 100);
                break;
            case 3: 
            
            printf("Voce vai para o inicio da fila e seu numeroId e: %d\n", cadastro->numeroId  = rand()% 100);
            break;
            
        default:
            printf("PRIORIDADE INVALIDA\n");
            break;
      
   }     
}
}
int input (){
    int menu;

        printf("de 1 a 3 Digite a sua prioriade qual e sua prioridade \n");
        scanf("%i", &menu);getchar(); 
    return menu; 
}
