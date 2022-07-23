#include<stdlib.h>
#include<stdio.h>
#include<math.h>



int main(void){


 float ganhoHora, horaDia, ir, inss, sindicato, salarioBruto, salarioLiquido;


printf("Digite quanto voce ganha por hora\n");
scanf("%f", &ganhoHora); 

printf("Agora digite a quantidade de horas que você trabalha no dia\n");
scanf("%f", &horaDia);


salarioBruto = (ganhoHora * horaDia) * 30;
ir = (11 / 100.0) * salarioBruto ;
inss = (8 / 100.0) * salarioBruto; 
sindicato = (5 / 100.0) * salarioBruto; 
salarioLiquido = salarioBruto - (ir + inss + sindicato);

printf("O valor do seu salario bruto e: %.2f \n", salarioBruto);
printf("O valor do desconto pago ao INSS e: %.2f\n", inss);
printf("O valor do desconto pago ao IR e: %.2f\n", ir);
printf("O valor do desconto pago ao Sindicato e: %.2f\n", sindicato);
printf("O valor seu salario Liquido e: %.2f\n", salarioLiquido);
   
    return 0;
}