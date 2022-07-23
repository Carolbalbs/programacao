#include <bits/stdc++.h>

using namespace std;

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
