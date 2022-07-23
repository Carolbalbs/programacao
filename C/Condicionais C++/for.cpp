#include <iostream>
#include <locale.h>

using namespace std;

int main (void){
   setlocale(LC_ALL, "Portuguese"); 
   /*
    for(*area de inicialização de variaveis* ; *area de condicionais*; *area de incremento/decremento*)
        //comando
    */
   
   for (int tempo = 0; tempo < 1000000000; tempo++);   
   
   
   //Mostra valores de pares e impares
    int x, y, z; 
    for (x = 0, y = 1, z = 1; x <= 10; x++, y+=2, z*=3)
    {
       cout << x << "---" << y << "---" << z << endl;
    }
    
    return 0;

}