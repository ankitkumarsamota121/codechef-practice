#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(32767, '\n');
    while (n--)
    {
        string expression{};
        getline(cin, expression);

        stack<char> st_p;
        stack<char> op;

        for (auto &c : expression)
        {
            // cout << c <<' ';
            if (c == '(')
                st_p.push(c);
            else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
                op.push(c);
            else if (c == ')')
            {
                st_p.pop();
                cout << op.top();
                op.pop();
            }
            else
                cout << c;
        }
        cout << endl;
    }
    return 0;
}