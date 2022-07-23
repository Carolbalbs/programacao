#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> Eu;
    stack<int> adversario;
    int dias;
    cin >> dias;
    int monstro;
    for (int i = 0; i < dias; i++)
    {
        cin >> monstro;
        Eu.push(monstro);
    }
    for (int i = 0; i < dias; i++)
    {
        cin >> monstro;
        adversario.push(monstro);
    }
    int perdi = 0, perdeu = 0;
    while (!Eu.empty() && !adversario.empty())
    {
        if (Eu.top() > adversario.top())
        {
            Eu.top() = Eu.top() - adversario.top();
            adversario.pop();
            perdeu += 1;
        }
        else
        {
            adversario.top() = adversario.top() - Eu.top();
            Eu.pop();
            perdi += 1;
        }
    }
    if (perdeu > perdi)
    {
        cout << "Eu " << perdi;
    }
    else
    {
        cout << "Adversario " << perdeu;
    }
}