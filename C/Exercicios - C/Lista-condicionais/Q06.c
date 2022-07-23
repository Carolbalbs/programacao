#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void){
    float salario, reajuste1, reajuste2,reajuste3, reajuste4, aumento;

    printf("Insira o valor do seu salario\n");
    scanf("%f", &salario);
 
    if (salario <= 280 ){
        reajuste1 = 0.20 * salario;
        aumento = reajuste1 + salario;

            printf("Seu salario antes do reajuste era:R$ %.2f\n", salario);
            printf("Voce recebeu um aumento de 20 por cento\n"); 
            printf("O valor do seu aumento e:R$ %.2f\n", reajuste1);
            printf("O seu novo apos aumento e: R$ %.2f\n", aumento);
    } else if (salario > 280 && salario <= 700 ){
        reajuste2 = 0.15 * salario;
        aumento = reajuste2 + salario;

            printf("Seu salario antes do reajuste era:R$ %.2f\n", salario);
            printf("Voce recebeu um aumento de 15 por cento\n"); 
            printf("O valor do seu aumento e:R$ %.2f\n", reajuste2);
            printf("O seu novo apos aumento e: R$ %.2f\n", aumento);
    
    } else if (salario > 700 && salario <= 1500 ){
         reajuste3 = 0.10 * salario;
         aumento = reajuste3 + salario;

            printf("Seu salario antes do reajuste era:R$ %.2f\n", salario);
            printf("Voce recebeu um aumento de 10 por cento\n"); 
            printf("O valor do seu aumento e:R$ %.2f\n", reajuste3);
            printf("O seu novo apos aumento e: R$ %.2f\n", aumento);

    } else { 
        reajuste4 = 0.05 * salario;
        aumento = reajuste4 + salario;

            printf("Seu salario antes do reajuste era:R$ %.2f\n", salario);
            printf("Voce recebeu um aumento de 5 por cento\n"); 
            printf("O valor do seu aumento e:R$ %.2f\n", reajuste4);
            printf("O seu novo apos aumento e: R$ %.2f\n", aumento);
    }
    return 0;
}