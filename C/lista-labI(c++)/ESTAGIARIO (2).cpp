#include <iostream>

using namespace std;

int calcula (int *dd, int *mm, int *aaaa)
{
 	int idade, diaAtual=18, mesAtual=10, anoAtual=2020;
 
 	idade=anoAtual-(*aaaa);
	 
	*dd=idade*360;
	*mm=idade*12;
 
 	return idade;
}

int main()
{
 	int dia, mes, ano;
 	cin >> dia >> mes >> ano;
 	ano = calcula (&dia, &mes, &ano);
 	cout << ano << " anos OU " << mes << " meses OU " << dia << " dias" << endl; 
	return 0;
}
