#include <iostream> 
#include <iomanip>

using namespace std;
/*
int main (void){ 
    Comando
    switch (expression)
    {
        case const1:
            comandos;
            break;
        case cont2;
            comandos; 
            break;
        default:
            comandos;
        
    int valor;
        cout << "Selecione as cores: [1]Verde [2]Azul [3]Vermelho" << endl;
        cin >> valor; 

        switch (valor){ 
       
            case 1:
                cout << "Cor selecionada : Verde" << endl;
                break;
            case 2: 
                cout << "Cor selecionada : Azul" << endl;
                break; 
            case 3: 
                cout << "Cor selecionada : Vermelho" << endl;
                break;
            default:
                cout << "Valor selecionado invalido" << endl;
        }
    cout << "Programa finalizado" << endl;
    return 0;
    
}
*/
int main (void){
    int valor; 

    cout << "Selecione um meio de transporte:" << endl;
    cout << "[1]Carro [2]Moto [3]Helicoptero [4]Aviao" << endl;
    cin >> valor;
    
    switch (valor){
        case 1:
        case 2:
            cout << "Transporte terrestre" << endl;
            switch(valor){
            case 1: 
                cout << "Carro selecionado" << endl;
                break;
            case 2:  
                cout << "Moto selecionado" << endl; 
                break;   
            }
            break;
        case 3:
        case 4:
            cout << "Transporte Aereo" << endl;
            switch (valor){
            case 3:
                cout << "Helicoptero selecionado" << endl;
                break;
            case 4:
                cout << "Aviao selecionado" << endl;
                break;

            }
            break;
        default:
            cout << "Transporte selecionado invalido" << endl;
        
    }
    cout << "Programa Finalizado" << endl;
    return 0;
}