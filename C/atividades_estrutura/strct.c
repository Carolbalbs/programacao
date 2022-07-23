#include <stdio.h>
struct horario 
{
    int hora;
    int minuto;
    int segundo;
    char letra;

};
struct horario detalhes(struct horario x);
int main(){

struct horario agora;
struct horario prox; 
    printf("Digite a hora \n");
    scanf("%i", &agora.hora);
    printf("Digite o minuto \n");
    scanf("%i", &agora.minuto);
    printf("Digite o segundo \n");
    scanf("%i", &agora.segundo);
   
        printf("%i : %i : %i \n", agora.hora,   agora.minuto, agora.segundo);
    prox = detalhes(agora);
    printf(" %c \n",  prox.letra);    
    return 0;
}
struct horario detalhes(struct horario x)
{
    
    printf(" letra %c \n", x.letra);
      x.letra = 'a';
return x ;
};
