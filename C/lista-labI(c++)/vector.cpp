#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> numero; 
	int tamanho, i;

	numero.push_back(10);// insere(adiciona no final) dentro do vector dados 
	numero.push_back(5);
	numero.push_back(8);
	numero.push_back(4);
	numero.push_back(2);

	tamanho = numero.size();//insere o tamanho do vector dentro da variavel tamanho 

	cout << "Tamanho do vector: "<< tamanho << endl; 

	for ( i = 0; i < tamanho; i++)
	{
		cout << " " << numero[i] ;// mostra a posicao em que cada dado esta
		 
	}
	
}
