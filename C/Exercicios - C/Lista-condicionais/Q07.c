#include<stdlib.h>
#include<stdio.h>

int main(void){

    float salarioBruto, salarioLiquido, totalDesconto,  horasMes, valorHora, ir, inss, sindicato, fgts;
 //
    printf("Quanto voce ganha por hora? \n");
    scanf("%f", &valorHora);
    
    printf("Quantas horas voce trabalha no mes?\n");  
    scanf("%f", &horasMes);

    salarioBruto = valorHora * horasMes;
    
    if (horasMes < 100)
    {
        printf("ERRO");

    } else if (salarioBruto <= 900 ){
    
        fgts = 0.11 * salarioBruto;
        inss = 0.10 * salarioBruto ;
        sindicato = 0.03 * salarioBruto;
        salarioLiquido = salarioBruto - (inss + sindicato);
        totalDesconto = inss + sindicato;

            printf("-----------------------\n");
            printf("Salario Bruto: R$%.2f\n", salarioBruto);
            printf("(-) IR :(insento) \n");
            printf("(-)INSS(10%%): R$%.2f\n", inss);
            printf("(-)Sindicato(3%%): R$%.2f\n", sindicato);
            printf("FGTS(11%%): R$%.2f\n", fgts);
            printf("Total de desconto: R$%.2f\n", totalDesconto);
            printf("Salario Liquido: R$%.2f\n", salarioLiquido);

    } else if (salarioBruto > 900 && salarioBruto <= 1500 )
    {
        fgts = 0.11 * salarioBruto;
        ir = 0.05 * salarioBruto ;
        inss = 0.10 * salarioBruto ;
        sindicato = 0.03 * salarioBruto ;
        salarioLiquido = salarioBruto - (ir + inss + sindicato);
        totalDesconto = ir + inss + sindicato;

            printf("-----------------------\n");
            printf("Salario Bruto: R$%.2f\n", salarioBruto);
            printf("(-) IR (5%%): R$%.2f\n", ir);
            printf("(-)INSS(10%%): R$%.2f\n", inss);
            printf("(-)Sindicato(3%%): R$%.2f\n", sindicato);
            printf("FGTS(11%%): R$%.2f\n", fgts);
            printf("Total de desconto: R$%.2f\n", totalDesconto);
            printf("Salario Liquido: R$%.2f\n", salarioLiquido);

    } else if (salarioBruto > 1500 && salarioBruto <= 2500 )
    {
        fgts = 0.11 * salarioBruto;
        ir = 0.10 * salarioBruto ;
        inss = 0.10 * salarioBruto ;
        sindicato = 0.03 * salarioBruto ;
        salarioLiquido = salarioBruto - (ir + inss + sindicato);
        totalDesconto = ir + inss + sindicato;

            printf("-----------------------\n");
            printf("Salario Bruto: R$%.2f\n", salarioBruto);
            printf("(-) IR (10%%): R$%.2f\n", ir);
            printf("(-)INSS(10%%): R$%.2f\n", inss);
            printf("(-)Sindicato(3%%): R$%.2f\n", sindicato);
            printf("FGTS(11%%): R$%.2f\n", fgts);
            printf("Total de desconto: R$%.2f\n", totalDesconto);
            printf("Salario Liquido: R$%.2f\n", salarioLiquido);

    } else
    {
        fgts = 0.11 * salarioBruto;
        ir = 0.20 * salarioBruto ;
        inss = 0.10 * salarioBruto ;
        sindicato = 0.03 * salarioBruto ;
        salarioLiquido = salarioBruto - (ir + inss + sindicato);
        totalDesconto = ir + inss + sindicato;

            printf("-----------------------\n"); 
            printf("Salario Bruto: R$%.2f\n", salarioBruto);
            printf("(-) IR (20%%): R$%.2f\n", ir);
            printf("(-)INSS(10%%): R$%.2f\n", inss);
            printf("(-)Sindicato(3%%): R$%.2f\n", sindicato);
            printf("FGTS(11%%): R$%.2f\n", fgts);
            printf("Total de desconto: R$%.2f\n", totalDesconto);
            printf("Salario Liquido: R$%.2f\n", salarioLiquido);
        
    }
 
    return 0;
   
}