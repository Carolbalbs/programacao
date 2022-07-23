#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>



#define MAX 10

void clear(){

    #if defined(__linux__) ||  defined(__unix__) || defined(__APPLE__)
    system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

 char fila [MAX];
 int posicao = 0;
 int reposicao = 0;

 void entra(void);
 void armazena(char q);
 void deleta(void);
 char recuperar(void);
 void vizualiza(void);


int main (){

    setlocale(LC_ALL, "Portuguese");

 char opcao;
 int  i;
    for ( i = 0; i < MAX; i++) p[i] = '\0';
   
    for (;;)
    {
        clear();
        printf("Digite uma letra para realizar o que deseja fazer\nE - Para entra na fila\n D - para deixar a fila\n V - para vizualizar a fila\n S - para sair\n");
        scanf("%c", &opcao);

        switch (opcao)
        {
        case 'E':
            entra();
            break;
        
        case 'D':
            deleta();
            break;
        case 'V':
            vizualiza();
            break;
        case 'S':
            exit(0);
            break;
        default:
        printf("VALOR DIGITADO INVALIDO\n");

        getchar();}
        printf("Digite ENTER para sair \n");
        getchar();
    
    }
    getchar();
    return 0;
}
 void entra(void){
   char evento; 
   do
   {
       printf("Insira o nome na fila\n");
       scanf(" %c", &evento);
        if (evento == '0')
        {
            getchar();
            return;
        }else
        {
            armazena(evento);
        }     
   } while (evento != '0');   
 }
 void armazena(char q){
     if (posicao == MAX)
     {
         printf("A fila está cheia\n");
         return;
     }
     p[posicao] = q;
     posicao++;    
 }
 void deleta(void){
     char evento;
     char tempo;

        evento = recuperar();
            if (!evento ) return;
            printf("%c \n", evento);
            scanf("%c", &tempo);
            printf("Prescione ENTER para sair\n");
            getchar();

            
 }
 char recuperar(void){
     if (reposicao == posicao){

         printf("Sem eventos pra çer \n");
         getchar();
         printf("Prescione ENTER para sair\n");
         getchar();
    return '\0';
     }
     reposicao ++ ;
     return p[reposicao-1];
 }
 void vizualizar(void){

     int i; 
     char tempo;
     for ( i = reposicao; i < posicao; i++)
     {
        printf("\n [%d]: %c", i+1, p[i]);
     }
        if (reposicao == posicao)
        {
            printf("\n Fila vazia\n");
            printf("\n posicao : %p", posicao);
            printf("\n reposicao : %p\n", reposicao);
        }
        scanf("%c", &tempo);
        printf("Prescione ENTER para sair\n");
        getchar();
     
 }
