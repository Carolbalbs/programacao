#include<stdlib.h>
#include<stdio.h>

int main(void){
    
    float mulheres, homens;
    printf("Informe a sua altura: ");
    scanf("%f %f", &mulheres, &homens );

    mulheres = (72.7 * mulheres) - 58;
    homens = (62.1 * homens )  - 44.7;
    
    printf("\nO valor para mulheres e: \n %f", mulheres);
    printf(" \nO valor para homens e :\n %f", homens 
    );

    return 0;
}