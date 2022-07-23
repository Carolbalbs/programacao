#include<iostream>
#include<stack>
/*
o número de monstros em cada deck de cartas - voce e seu oponente  (1 ≤ ‘N’ ≤ 100) 

o poder dos seus monstros,  (1 <= ‘F’ <= 100)

o poder dos monstros do seu adversário.

*/
using namespace std; 

int main (){

int deck_de_cartas; 
int deck_eu;
int deck_advesario;
cin >> deck_de_cartas;
stack<int> eu;
stack<int> adversario;
for (int i = 0; i < deck_de_cartas; i++)
{
    cin >> deck_eu; 
    eu.push(deck_eu);
    cin >> deck_advesario;
    adversario.push(deck_advesario);
}
cout << "tamanho pilha eu : " << eu.size() << endl;
cout << "topo da pilha eu :"  << eu.top() << endl;

cout << "tamanho pilha adversario : " << adversario.size() << endl;
cout << "topo da pilha adversario :"  << adversario.top() << endl;

    return 0;
}