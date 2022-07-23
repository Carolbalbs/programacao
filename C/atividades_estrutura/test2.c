#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX 10


/*
strcpy() - copiar uma string para outra
strncpy() - copia n caract parte de uma string pra outra
strcat() - concaternar string
strcmp() - comparar caracteres
strncmp() - comparar caracteres mas limitando a quantidade ser comparada
*/
void clear_buffer();


int main (){
char nome1[MAX], nome2[MAX];
    
        printf("Digite um nome para preencher o vetor\n");
        fgets(nome1, MAX , stdin ); 
        nome1[strcspn( nome1, "\n")] = '\0';
        clear_buffer();
        printf("O nome digitado foi %s\n", nome1);


        printf("Digite um nome para preencher o vetor\n");
        fgets(nome2, MAX , stdin ); 
        nome2[strcspn( nome2, "\n")] = '\0';
        clear_buffer();
        printf("O nome digitado foi %s \n", nome2);
        

    return 0;
}

void clear_buffer(){

        char c;
        do
        {
               c =  getchar();
        } while (c != '\n' && c!= EOF );
        
}