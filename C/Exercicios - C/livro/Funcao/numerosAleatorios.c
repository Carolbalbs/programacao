#include<stdio.h>
#include<stdlib.h>

/*

*/

int main(){
int i; 

for ( i = 1; i <= 20; i++)
{
    printf("%10d", 1 + (rand() % 6)); // escolhe um numero aletorio de 1 a 6 e imprime.

    if (i % 5 == 0) // se contador é divisivel por 5, inicia nova linha de impressão
    {
        printf("\n");
    }
}

 return 0;
}