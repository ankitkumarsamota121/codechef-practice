#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(32767, '\n');
    while (t--){
        string expr{};
        getline(cin, expr);
        int t = 0;
        int len = 0;

        for (int i = 0; i < expr.size(); i++)
        {
            if (expr[i] == '<')
                t++;
            else
                t--;
            if (t < 0)
                break;
            else if (t == 0)
                len = i + 1;
        }
        
        cout << len << endl;
    }
    return 0;
}