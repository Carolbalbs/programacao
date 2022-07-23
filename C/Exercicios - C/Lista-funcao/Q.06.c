#include<stdio.h>
#include<stdio.h>

/*
Faça um programa que use a função valorPagamento para determinar:

o valor a ser pago por uma prestação de uma conta. 

O programa deverá solicitar ao usuário:

o valor da prestação OK

o número de dias em atraso OK

passar estes valores para a função valorPagamento
que calculará o valor a ser pago e devolverá este valor ao programa que a chamou. 
  OK.

O programa deverá então exibir o valor a ser pago na tela.
  OK.
Após a execução o programa deverá voltar a pedir outro valor de prestação e assim continuar até que seja informado um valor igual a zero para a prestação. OK

 Neste momento o programa deverá ser encerrado, exibindo o relatório do dia, que conterá:

a quantidade OK

o valor total de prestações pagas no dia.

O cálculo do valor a ser pago é feito da seguinte forma.
 
 Para pagamentos sem atraso, cobrar o valor da prestação. 
 Quando houver atraso, cobrar 3% de multa, mais 0,1% de juros por dia de atraso. 
 0,03 /0,001
*/
float valorPagamento (int dias, float prest );
int main(){
    
    int diasAtraso;
    float prestacao;
    int contador = 0;
    float total;
    float totalPrestacaoDia; 
    
   totalPrestacaoDia = valorPagamento(diasAtraso, prestacao);
    do
    {
        printf("Digite o valor da prestacao: ");
        scanf("%f", &prestacao);
        printf("Digite o numero de dias em atraso ");
        scanf("%i", &diasAtraso);

        valorPagamento(diasAtraso, prestacao);
        
        printf("O valor da prestacao e: %f\n", valorPagamento(diasAtraso, prestacao));
       
        contador = contador + 1;

        total = totalPrestacaoDia + total;
      printf("O total de parcelas pagas foi : %f\n", total);
    } while (prestacao > 0.00);

    printf("O valor da prestacao a ser paga e: %f\n", valorPagamento(diasAtraso, prestacao));

    printf("\nRELATORIO DO DIA\n");
    printf("------------------\n");
    printf("A quantidade de parcelas calculadas foi : %i\n",  contador );
    

 return 0;
}
float valorPagamento(int dias, float prest){
    
    if (dias > 0)
    {
        float juros = prest * ( dias * 0.001);
        float multa = prest * 0.03;
        prest = prest + juros + multa;

    }else
    {
        prest = prest + dias;
    }
    
   return prest; 
}