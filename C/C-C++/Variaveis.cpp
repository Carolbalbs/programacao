#include <iostream>

using namespace std; 
int main (void) {
   int varInt = 100; 
   char c = 'r'; 
   double pFlutuante = 5.99; 

   cout << " O valor da variavel varInt e: " << varInt << endl;
   cout << "O valor da variavel c e: " << c << endl; 
   cout << "O valor da variavel pFlutuante e : " << pFlutuante << endl;
   
    cout << "Memoria da variavel varInt: " << sizeof(varInt) << " bytes" << endl; /* sizeof usado parasaber qual o tamanho do espaço que a variavel ocupa na memoria, endline é finalização da linha do programa(quebra de linha)*/ 
    cout << "Memoria da variavel c: " << sizeof(c) << " bytes" << endl;
    cout << "Memoria da variavel c: " << sizeof(pFlutuante) << " bytes" << endl;
   return 0 ; 


}