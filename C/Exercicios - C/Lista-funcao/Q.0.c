#include<stdio.h>
#include<stdio.h>

/*

*/

/*int main(){

    //int x; 
    void imprimaMensagem(void);//declarar a funçao
        imprimaMensagem();//chamar o bloco da funçao
    // x= 10;

 return 0;

}

void imprimaMensagem (void){

    printf("teste"); 
}

int main (){
    float calcularAreaRetang(float x, float y);
    float area = calcularAreaRetang(10.0, 20.0);
    printf("A area e: %2.f\n", area);
    return 0; 
}

float calcularAreaRetang (float base, float altura ){
    float area = base * altura;
    return area; 
}
int main (void){
    void teste (void);
    teste();
    teste();
    teste();
    return 0 ; 
}
void teste (void){

    int variavel = 2; //variavel local automatica - visivel apenas para funçao teste, retorna o mesmo valor sempre (por isso automatica) , nao guarda nem retorna valor acumulativo.
    variavel *= 2;
   static int var = 2; //variavel local estatica (não recria a variavel quando a funçao é chamada mais de uma vez na main, ou seja ela mantem um valor )
     var *= 2;
    printf("%i\n", variavel);
     printf("%i\n", var);
}*/
int square (int y);
int main (){
    int x;
    //int square (int y); 
    for ( x = 0; x <= 10; x++)
    {
        printf("%d\n", square(x));
        /*pega o valor de x e */
    }
    printf("\n");
return 0;
}

int square (int y){

    int quadrado; 
    quadrado = y * y;
    return ; 
}