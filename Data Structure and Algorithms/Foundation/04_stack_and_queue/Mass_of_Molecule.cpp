#include <bits/stdc++.h>
using namespace std;

int main()
{
    string formula{};
    cin >> formula;

    stack<int> S;
    int x;
    for (auto &c : formula){
        if (c == '(')
            S.push(-1);
        else if ( c == 'C' || c == 'O' || c == 'H'){
            switch (c)
            {
            case 'C':
                S.push(12);
                break;
            case 'O':
                S.push(16);
                break;
            case 'H':
                S.push(1);
                break;
            default:
                break;
            }
        }
        else if (c == ')'){
            x = 0;
            while (S.top() != -1){
                x += S.top();
                S.pop();
            }
            S.pop();
            S.push(x);
        }
        else {
            x = S.top() * (c - '0');
            S.pop();
            S.push(x);
        }
    }
    int mass = 0;
    while (!S.empty()){
        mass += S.top();
        S.pop();
    }
    cout << mass << endl;

    return 0;
}