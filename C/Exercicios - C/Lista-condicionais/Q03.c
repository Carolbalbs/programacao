#include <stdlib.h>
#include <stdio.h>


int main (void){

    
   char sexo;
    
    printf("Digite seu sexo (F) para Feminino (M) para Masculino\n");
    scanf("%c", &sexo);
    fflush(stdin);
    
    if ( sexo == 'F' || sexo == 'f')
    {
       printf("Sexo Feminino Selecionado");
    //sexo != F && sexo != f 
    }else if (sexo == 'M' || sexo == 'm')
    {
        printf("Sexo Masculino Selecionado ");
    //sexo != M && sexo != m     
    }else {
        printf("Sexo nao selecionado ou invalido");
    }
    
}