#include <iostream>
#include <stack>

using namespace std;

/*
inicialmente podemos notar que o codigo 
é composto por no 2 funçoes boelanas
*/
bool isOpening(char c){
    return ( c == '(' || c == '{' || c == '[' || c == '<');
}

bool match(char a, char b){
    if (a == '(' && b == ')'){
        return true;
    }
    if (a == '{' && b == '}'){
        return true;
    }
    if (a == '[' && b == ']'){
        return true;
    }
    if (a == '<' && b == '>'){
    	return true;
    }
    return false;
}
/*
em seguida o bloco 'string is balanced' testa se 
o parametro manipulado pela string s é balanceada 
em seguida
cria-se uma pilha com tipo char denominada 'q'
seguido de um loop for que que le cada caracter c da string s
seguido de condicoes aninhadas que realizam alteracoes na pilha a depender a condicao pre- estabelecida

****Sobre a parte !q.empy(), eu me atrapalhei e disse que NÃO era possivel dar .pop caso a pilha não esteja vazia (ou seja caso a pilha estivesse com valores), porem é ao contrario, se a pilha ESTIVER vazia não podemos dar o comando .pop****
*/
string isBalanced(string s) {
    stack<char> q;
    for (char c : s){
        if (isOpening(c)){
            q.push(c);
        }
        else{
            if (!q.empty() && match(q.top(), c)){
                q.pop();
            }
            else {
                q.push('*');
                break;
            }
        }
    }
    if (q.empty()){
        return "Y";
    }
    return "N";
}

int main(){
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << "\n";
    }
}
