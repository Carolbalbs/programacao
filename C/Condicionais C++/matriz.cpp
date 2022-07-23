#include<iostream>
#include <locale.h>

using namespace std; 

int main (void){
setlocale(LC_ALL, "Portuguese");
/*
Matrizes - Vetor de vetores
Arrays bidimensional - dentro de cada posicao de 1ª indice eu tenho um novo vetor

int matriz [*linhas*][*colunas*]
para cada indice de linha tem-se 4 posicoes (colunas)
*/
    int matriz[3][4];
    int l,c;

    for (l = 0; l < 3; l++){
        for (c = 0; c < 4; c++)
        {
            // cin >> matriz[l][c]; - Entrando com valores pelo teclado.
             matriz[l][c] = l;
        }   
    }

    /*
    matriz[0][0] = 0;
    matriz[0][1] = 0;
    matriz[0][2] = 0;
    matriz[0][3] = 0;
    matriz[1][0] = 1;
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;
    matriz[2][0] = 2;
    matriz[2][1] = 2;
    matriz[2][2] = 2;
    matriz[2][3] = 2;*/

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }
    

    return 0; 
}