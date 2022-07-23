#include<stdio.h>
#include<stdio.h>

/*
2. Faça um programa, com uma função que necessite de três argumentos inteiros, e
que forneça a soma desses três argumentos.

int numeros(int x, int y, int z);
int maiorDeles(int x, int y, int z);

int main(){
    int num1;
    int num2;
    int num3;
    printf("Digite um numeros inteiro\n");
    scanf("%d",&num1);
    printf("Digite um numero\n");
    scanf("%d",&num2);
    printf("Digite um numero\n");
    scanf("%d",&num3);
    printf("--------------------------\n");
    printf("Soma dos inteiros : %d\n", numeros(num1, num2, num3));
    printf("Maior numero e : %d\n", maiorDeles(num1, num2, num3));
 return 0;
}

int numeros(int x, int y, int z){

    int soma = x + y + z;
    
    return soma;
}
int maiorDeles(int x, int y, int z){
    int numeroMaior = x;
    if ( y > numeroMaior )
    {
        numeroMaior = y;

    }
    if ( z > numeroMaior ){
    
        numeroMaior = z;
    }

  return numeroMaior; 
}

int add(int x, int y);// função com 2 paramentos 
int main (){

    int sum;
    sum = add (4,1);//função parametrizada com argumentos

    printf("%d ", add (4,1));
}
int add(int x, int y){

    return x + y;
}
*/
int soma (int num1 , int num2, int num3);
int main (){

    int num1;
    int num2;
    int num3;
    printf("Digite 3 inteiros : ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("O resultado da soma dos argumentos e : %d", soma(num1, num2 , num3));
}
int soma (int num1 , int num2 , int num3){

    return num1  +  num2 + num3; 
;}