#include <iostream>

using namespace std;

int calcula (int *dd, int *mm, int *aaaa)
{
 	int idade, diaAtual=18, mesAtual=10, anoAtual=2020;
 
 	idade=anoAtual-(*aaaa);
 
 	/*1 ano tem 365 dias (considerando um ano nao bissexto), logo, pra encontrar a idade em dias de uma pessoa: 
	 basta multiplicar a idade x 365,
 	no entanto, a data fixa informada e 18/10/2020, logo a multiplicacao nao sera feita por 365 e sim por 290 (365-61 dias, referentes a menos 2
 	meses ate o fim do ano (Dezembro/Novembro) e -13 dias referentes ao dia em questao (18) (18+13=31 dias de Outubro)*/
	 
	*dd=idade*290;
	*mm=idade*mesAtual;
 
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
