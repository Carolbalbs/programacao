#include <iostream>
#include <iomanip>

using namespace std;

int main (void){
/* 
Condições II
if (condição) {
    façaisso();
}else (senão){
    (façaaquilo)
}

*/
 
/*
cout << "Digite um numero qualquer" << endl;
int valor = 0;  
cin >> valor; 
if (valor > 50)
{
    cout << "O valor digitado e maior que 50" << endl; 
}
else{
    cout << "O valor digitado e menor que 50" << endl;
}    
    system("pause");
    return 0;
*/   
//Operador Ternario
//operador condicional IF Ternário, um teste condicional bastante simples.
   
   /*int nota1, nota2, soma;
    string res;

     cout << "Digite nota 1" << endl; 
     cin >> nota1;

     cout << "Digite nota 2" << endl; 
     cin >> nota2;

    soma = nota1 + nota2;
    //(soma >= 7) ? res = "Aprovado" : res = "Reprovado";
     res = (soma >= 7) ? "Aprovado" : "Reprovado";

     cout << res << endl; */
     int num, x; 
     x = 5;
        cout << "Digite um valor inteiro" << endl;
        cin >> x;

    (x >= 7) ?  x++ : x--;
    cout << "O valor de x e: " << x << endl;



    
}   