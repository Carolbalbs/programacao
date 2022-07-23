#include<stdlib.h>
#include<stdio.h>

int main(void){

    char letra;

    printf("Digite uma letra e descubra se e vou vogal ou consoante\n");
    scanf("%c", &letra);
    fflush(stdin);
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        printf("A letra digitada e uma vogal\n");
    }else
    {
        printf("A letra digitada e uma consoante\n");
    }
    
    
    return 0;
}