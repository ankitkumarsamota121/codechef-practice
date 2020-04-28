#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, c, total;
    cin >> t;
    while(t--)
    {
        cin >> n >> c;
        total = 0;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            total += a;
        }

        cout << (total <= c ? "Yes\n" : "No\n");
    }
    return 0;
}