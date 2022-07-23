#include <iostream>

using namespace std;

int main (void){

    int n;

    n = 0; 
    while (n<20)
    {
        cout << n << endl;
        //n++;
        n+=2;
        //cin >> n;
        if (n ==10)
        {
            break;
        }
        
    }
    cout << "Rotina Finalizada" << endl;
    return 0;
}