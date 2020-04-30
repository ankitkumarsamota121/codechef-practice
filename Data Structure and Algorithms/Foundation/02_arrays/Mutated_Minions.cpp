#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, a, total;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if ((a + k) % 7 == 0)
                total++;
        }

        cout << total << endl;        
    }
    return 0;
}