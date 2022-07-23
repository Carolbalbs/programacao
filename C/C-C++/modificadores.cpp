#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {
/* Modificadores de tipo 
  - Short - diminui (variavel armazena um numeros menores)
  - Long - aumenta (variavel armazena numeros maiores)
  - Unsigned - sem sinal (variavel armazena somente numero positivo )
  - Singed - com sinal (variavel armazena  numeros positivos e negativos)
*/
int a = 0; // 4 bytes
short int b = 0; // 2 bytes
long int c = 0; // 4 bytes
signed int d = 5; 
signed int e = -3;
unsigned int f = 20;
//sizeof informa o tamanho da variavel na memoria
cout << sizeof(a) << endl;
cout << sizeof(b) << endl;
cout << sizeof(c) << endl;
cout << sizeof(d) << endl;
cout << sizeof(e) << endl;
cout << sizeof(f) << endl;

    return 0 ;
}