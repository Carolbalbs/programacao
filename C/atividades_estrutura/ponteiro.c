#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int x = 10;
     double y = 2.5;
     int *ponteiro = x;
        x = 20;
        ponteiro = &x;
    double *ponteiroY = &y;
        y = 23.45;
    double soma = *ponteiroY + *ponteiro;
    
     printf("| O valor de soma = %f ", soma);*/


struct cliente
{
    int prioridade;
    char nomeCompleto;
    int numeroId;
};
struct cliente detalhes ()
{
    /* data */
};

 int main(){
    struct cliente cadastro;
    cadastro.numeroId = rand()% 100;
    do
    {
        printf("Digite sua prioridade\n");
        scanf("%i%*c", &cadastro.prioridade);
        printf("Digite seu nome\n");
        scanf("%i%*c", &cadastro.nomeCompleto);
        printf("Seu numeroId e: %d%*c\n", &cadastro.numeroId);
        printf("Digite 0 para sair\n" );
        
    } while ( prioridade <= 0 );
    
 }