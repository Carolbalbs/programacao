#include<iostream>
#include<vector>
using namespace std;
/*
As Joias tem seus identificadores especiias, que são: 
Joia do Poder =0, 
Joia do Tempo = 7, 
Joia da Mente = 11, 
Joia do Espaço = 14, 
Joia da Realidade = 17, 
Joia da Alma = 19. 
Esses identificadores poderão aparecer no máximo uma vez cada.

Entrada
A primeira linha contém um inteiro ‘N’ (0 < N < 1000) que informará
a quantidade de joias que Thanos coletou
a segunda linha contém os ‘N’ identificadores inteiros ‘X’ (0 <= X <= 1000) das joias que Thanos já coletou.

Saída


-caso Thanos tenha coletado todas as joias(verdadeiras). 
Você deverá exibir a mensagem “Vingadores Avante”,

-Caso tenha coletado apenas algumas, 
você deverá exibir todas as joias verdadeiras que foram coletadas por Thanos, na ordem em que foram dadas e na segunda linha a mensagem “Vingadores Atencao”. 

-Caso Thanos não tenha coletado nenhuma joia verdadeira, 
exiba a mensagem “Pizza”.


O identificador de joias mostra quais joias o foram coletadas pelo vector para faze-lo  precisa de um for laço com size mostrando o tamanho do vector de joias coletadas 
*/
int main (){

    int identificador_joias;
    int numero_joias_coletadas;
    int tamanho;
    vector<int> numero_joias_coletadasV; 
    //vector<int> joia_verdadeira[6];

    cin >> numero_joias_coletadas;
    cin >> identificador_joias;
    
    
        joias_coletadas.push_back(7);
        joias_coletadas.push_back(0);
        joias_coletadas.push_back(17);
        joias_coletadas.push_back(3);
        joias_coletadas.push_back(11);
        joias_coletadas.push_back(10);
    

    
    tamanho = joias_coletadas.size();
    cout << "Tamanho do vector: "<< tamanho << endl;
    //joias = {0, 7, 11, 14, 17, 19};
    
    //cout << identificador_joias << endl << //joias_coletadas <<  endl;
     
    for ( identificador_joias = 0; identificador_joias < tamanho; identificador_joias++)
    {
        cout << " " << joias_coletadas[identificador_joias]; 
    }
    
    
        
    /*
    if(){
        
        cout << "Pizza " <<  << endl;
        
        }
     else if(){
    
        cout << "Vingadores Atencao!! " <<  << endl;

        }
    else{

        cout << "Vingadores Avante!! " <<  << endl;
    }*/
    return 0;

}

