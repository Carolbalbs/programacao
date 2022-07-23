#include <iostream>
using namespace std;
int main (void){
/*
Vetor - coleçao de variaveis do mesmo tipo
tipo nome[tamanho]; - Armazena variaveis com mesmo tamanho e tipo 
 int cores[10];
*/
int vetor[5]; //{10, 20, 30, 40, 50};
int  i;

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
for ( i = 0; i < 5; i++)
{
    cout << vetor[i] << endl;
}
   return 0;
}