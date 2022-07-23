#include <iostream>
#include <iomanip>
 using namespace std; 

int main (void) {
/*Operadores Aritmeticos
    * Multiplicaçao
    / Divisao
    + Adiçao
    - Subtraçao
*/
int x, y; 
x = 80.0;
y = 203.0;

    cout << "A soma entre x e y : " << x + y << endl;
    cout << x << endl;
    cout << y << endl << endl;
    x+=5;
    y*=5;
    cout << x << endl ;
    cout << y << endl << endl;
    cout << "A subtracao entre x e y : " << x - y << endl;
    cout << "A mutiplicacao entre x e y : " << x * y << endl;
    cout << "A divisao entre x e y : " << y / x << endl;
    
    return 0;
}