#include<iostream>
#include<vector>

using namespace std;
int main (){

    int numero_joias_coletadas; 
    int tamanho;
    int joiass_coletadas;
    cin >> numero_joias_coletadas;
    cin >> joiass_coletadas;
    vector<int> joias_coletadas;
    vector<int> joia_verdadeira{0,7, 11, 14, 17, 19};

numero_joias_coletadas = tamanho;        
if (numero_joias_coletadas == tamanho)
{
    
         cout << endl ;
    
    cout << "Vingadores Avante" << endl;

} else if (numero_joias_coletadas == 5)
{
        joias_coletadas.push_back(14);
        joias_coletadas.push_back(2);
        joias_coletadas.push_back(6);
        joias_coletadas.push_back(0);
        joias_coletadas.push_back(19);

    tamanho  = joias_coletadas.size();

    cout << " " << joias_coletadas[0];
    cout << " " << joias_coletadas[3];
    cout << " " << joias_coletadas[4];
     

    cout << endl;
    cout << "Vingadores Atencao ";
} else if (joiass_coletadas == 2 || joiass_coletadas == 3 || joiass_coletadas || 4)
{
    cout << "Pizza "<<  endl;
}

    return 0; 
}