#include <iostream> 

using namespace std;

int main (void){

    /*
    Comando Break (parada)
    Interrompe a sequencia normal de um loop de repeticao (while, for, etc..)
    */
int cont; 

cont = 0; 
while (cont < 1000 )
{
   cout << cont << endl;
  /* if (cont == 500)
   {
      break; 
   }*/
cont++;
}

}