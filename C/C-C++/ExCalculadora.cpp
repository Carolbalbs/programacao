#include <iostream>
#include <iomanip>
using namespace std; 

int main (void){
//Calculadora
    int num1, num2, soma, sub, multi, divi;

    cout << "Seja bem vindo a nossa primeira calculadora" << endl;
    
    cout << "Digite um numero" << endl;
    cin >> num1;
    
    cout << "Digite um numero novamente" << endl;
    cin >> num2;

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;

    cout << setw(300) << "A soma e: " << soma << endl;
    cout << setw(300) << " A subtracao e: " << sub << endl;
    cout << setw(300) << "O produto e: " << multi << endl;
    cout << setw(300) << "A divisao e: " << divi << endl;
    cout << setw(300) << "O resto da divisao e: " << num1 % num2 << endl;

system("pause"); 
return 0;    
}