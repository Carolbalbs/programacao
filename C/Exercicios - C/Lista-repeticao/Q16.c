#include<stdio.h>
#include<stdlib.h>
/*
*/
int main (){
    int num1 = 1, num2 = 2, num3 = 3, num4 = 0;
    int entrada;

       
     /*printf("-----------------------------------------------------\n");
        printf("               TABAJARA EMPRESA DE CAFE\n");
        printf("-----------------------------------------------------\n");
        printf("1 - CADASTRAR TIPO DE CAFE\n");
        printf("2 - CADASTRAR VENDEDOR\n");
        printf("3 - EXIBIR TIPOS DE CAFE.\n");
        printf("0 - SAIR\n");
        printf("----------------------------------------------------\n");
        printf("INFORME SUA OPCAO: \n");
        scanf("%i", &entrada);   
    do
    {  
        printf("OPCAO INVALIDA. POR FAVOR, ESCOLHA UMA DAS OPCOES DISPONIVEIS NO MENU.\n");
        printf("-----------------------------------------------------\n");
        printf("               TABAJARA EMPRESA DE CAFE\n");
        printf("-----------------------------------------------------\n");
        printf("1 - CADASTRAR TIPO DE CAFE\n");
        printf("2 - CADASTRAR VENDEDOR\n");
        printf("3 - EXIBIR TIPOS DE CAFE.\n");
        printf("0 - SAIR\n");
        printf("----------------------------------------------------\n");
        printf("INFORME SUA OPCAO: \n");
        scanf("%i", &entrada); while (num1 != entrada || num2 != entrada || num3 != entrada || num4 != entrada);

    if (num1 == 1)
    {
        printf("A opcao selecionada foi %i - CADASTRAR TIPO DE CAFE\n", num1);

    } else if (num2 == 2)
    {
        printf("A opcao selecionada foi %i - CADASTRAR VENDEDOR\n", num2);
    } else if (num3 == 3)
    {
        printf("A opcao selecionada foi %i - EXIBIR TIPOS DE CAFE\n", num3);
    } else if (num4 == 0)
    {
        printf("A opcao selecionada foi %i - SAIR\n", num4);
    }
*/    
    printf("%i\n", num1);
    printf("%i\n", num2);
    printf("%i\n", num3);
    printf("%i\n", num4);

    printf("INFORME SUA OPCAO: \n");
    scanf("%i", &entrada);

       if (entrada == num1 && entrada == num2 )
       {
           printf("ENTROU %i\n", entrada);
       }else
       {
           printf("QUEBROU\n");
       }
       
        //|| entrada != num2 || entrada != num3 || entrada != num4
    return 0; 
}