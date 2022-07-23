#include <iostream> 

using namespace std; 

int main (void){
/* 
    int num = 10;
    int num2 = 3; 
    int sol = 5; 
        
        if (sol >= 10 && sol <= 5)
        {
            cout << "vou ao clube" << endl;
        }else
        {
            cout << "vou ao cinema" << endl;        }
 */       
   int idade, feminino, gosta_de_esportes;
    

     cout << "Digite sua idade" << endl;
     cin >> idade; 

     cout << "Voce e do sexo feminino ? 1 para sim e 0 para nao." << endl;
     cin >> feminino;

     cout << "Voce gosta de praticar esportes?1 para sim e 0 para nao." << endl;
     cin >> gosta_de_esportes;

        if (idade == 18 && feminino == 1 && gosta_de_esportes == 1)
        {
            cout << "Voce esta apto para o cadastro" << endl;
        }else
        {
            cout << "Voce nao esta apto ao cadastro" << endl;
        }
            
}