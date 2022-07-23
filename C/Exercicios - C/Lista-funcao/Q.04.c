#include<stdio.h>
#include<stdio.h>

/*
4. Faça um programa com uma função chamada somaImposto. A função possui dois
parâmetros formais: taxaImposto, que é a quantia de imposto sobre vendas
expressa em porcentagem e o custo, que é o custo de um item antes do imposto. A
função retorna o valor final do item: valor_final = custo + imposto.

taxaImposto = quantia de imposto sobre venda (porcentagem)
custo = valor do item antes de ser taxado 
*/
float somaImposto (float taxaImposto, float custo);
int main (){
    
    float x;
    float y; 
    printf("%.3f", somaImposto(x, y));
}
float somaImposto (float taxaImposto, float custo){
    
    float imposto;
    printf("Digite o valor da venda : ");
    scanf("%f", &custo);
    printf("Digite o valor da taxaImposto : ");
    scanf("%f", &taxaImposto);
    
    imposto = taxaImposto * custo;
    return  imposto + custo;
}