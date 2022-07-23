#include <iostream>
#include <iomanip>

using namespace std;
//Constantes Definem valores fixo 
#define pi 3.14
#define phi 1.61
#define aula cout << "Aula de C++\nOla aluno!! digite insira suas notas no espaco pedido e veja sua media !!"

int main (void){
/* Condições Aninhadas 
   Fazer um programa que peça as 4 notas do aluno, calcule a media e mostre :
    a. A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    b. A mensagem "Reprovado", se a média for menor do que sete;
    c. A mensagem "Aprovado com Distinção", se a média for igual a dez.
*/  
    float nota1, nota2, nota3, nota4, media, mediaMin;
    char opc;
    inicio:

    cout << pi << endl; 
    cout << phi << endl;
    aula << endl << endl;

    cout << "-------------" << endl; 
    cout << "Primeiro informe qual o valor da media para ser aprovado" << endl;
    cin >> mediaMin; 
    cout << "Agora... Digite sua nota 1" << endl;
    cin >> nota1 ; 
    
    cout << "Digite a sua nota 2" << endl;
    cin >> nota2;
    
    cout << "Digite a sua nota 3" << endl;
    cin >> nota3;
    
    cout << "Digite sua nota 4" << endl;
    cin >> nota4;

    media = nota1 + nota2 + nota3 + nota4; 
    media/=4; //media = (media / 4);  

        cout << "Sua media do semestre foi:" << media << endl;
        if ( media == 10 )
        {
            cout << "Execelente! Aprovado com distincao" << endl;
            
        }else if ( media < 10 && media >= mediaMin)
        {
           cout << "Parabens, voce foi aprovado" << endl;

        }else if ( media < mediaMin )
        {
            cout << "Sinto muito, voce foi reprovado" << endl;
        }
        cout << "Deseja digitar outras notas? (s) para Sim e (n) para Nao" << endl;
        cin >> opc;        

            if (opc == 's' or opc == 'S'){
            
                goto inicio;
            }
            
        system("pause");
        return 0;
        
}