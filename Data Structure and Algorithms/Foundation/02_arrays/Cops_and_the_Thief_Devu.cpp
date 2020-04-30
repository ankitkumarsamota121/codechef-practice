#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, x, y;
    cin >> t;
    while (t--)
    {
        cin >> m >> x >> y;
        int cops[m];
        int start, end;
        for (int i = 0; i < m; i++)
            cin >> cops[i];
        int houses[101]{0};
        for (int i = 0; i < m; i++)
        {
            if (cops[i] - x*y < 1)
                start = 1;
            else
                start = cops[i] - x*y;
            end = cops[i] + x*y;
            for (int j = start; j <= end; j++)
                if (houses[j] == 0)
                    houses[j] = 1;
        }
        int safe_houses = 0;
        for (int i = 1; i <= 100; i++)
            if (houses[i] == 0)
                safe_houses++;
        
        cout << safe_houses << '\n';
    }
    return 0;
}