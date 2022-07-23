#include <iostream>
#include <iomanip>

using namespace std;

int main (void){
/* Condições 
Determinam o fluxo de excução do programa
*/
    int i = 5, i2 = 10;
        cout << "A variavel i e igual a variavel i2?" << endl;
        
        // i  igual a i2
        if (i == i2)
        {
            cout << "A variavel i e igual a variavel i2" << endl;
        }

        /*i diferente i2 */
        if ((i != i2) == true)
        {
            cout << "A variavel i e diferente da variavel i2" << endl;
        } 
        

        system("pause");
        return 0;
        
}