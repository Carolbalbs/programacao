#include<iostream>
#include<stack>

using namespace std; 

int main (){

    stack <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouro"); 
    cartas.push("Rei de Paus");
    

if (cartas.empty() != 0)
    {
        cout << "Pilha com cartas" << endl;

    }else
    {
        cout << "Pilha vazia" << endl;
    }
    cout << "Tamanho da pilha:  " << cartas.size() << endl; 
    cout << "Carta do Topo - "  <<   cartas.top() << endl;

    cartas.pop();

    cout << "Tamanho da Pilha:  " << cartas.size() << endl;
    cout << "Carta do topo - " <<  cartas.top() << endl;
    
}