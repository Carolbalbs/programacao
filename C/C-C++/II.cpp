#include <iostream> 
#include <stdlib.h>
#include <iomanip>
// Stream 
using namespace std; 
 
 
 int main (void){
    /*obj cin -
    */ 
    /*obj cout - Objeto de saida de fluxo, passamos a este o que deve ser exibido no monitor
    */

   cout << "Estudando entrada e saida de dados." << endl; 
   cout << setw(10) << 10 + 50 << endl;// operaçao de inserção
   
   cout << setw(5) << "Agora, informe o numero" << endl;
   int num1 = 0; 
   cin >> num1;

   cout << setw(5) << "informe outro numero" <<   endl;
   int num2 = 0; 
   cin >> num2; // Operador de extraçao

   cout << setw(300) << "Os valores informados foram: "
   << num1
   << " e "
   << num2

   << endl;
   



    system("pause");

    return 0;
 }