#include <iostream>
#include <locale.h>

using namespace std;
int main (void){
setlocale(LC_ALL, "Portuguese");
    /*
    Comando Do while -Executa o bloco de comando pelo menos 1 vez porque o teste é realizado no final com uma condicao (SE a condicao for satisfeita ele sai do loop SENAO ele retorna para o inicio do bloco e testa novamente)
    */
   int contagem;
    
    contagem = 20; 
    /*
    while (contagem < 20)
    {
        cout << "Contagem" << contagem << endl;
    }
        cout << "Fim do programa"  << endl;
   */
  do
   {
       cout << "Contagem" << contagem << endl;
   } while (contagem < 20);
   
}