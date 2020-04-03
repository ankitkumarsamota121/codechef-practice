#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        cin >> n;
        vector<int> A(n);

        for (int &Ai : A)
            cin >> Ai;

        bool flag = false;
        int dist = 6;

        for (int &Ai : A)
        {
            if (dist < 6 && Ai == 1)
            {
                flag = true;
                break;
            }
            if (Ai == 1)
                dist = 1;
            else
                ++dist; 
        }

        cout << (flag ? "NO\n" : "YES\n");
    }
    return 0;
}