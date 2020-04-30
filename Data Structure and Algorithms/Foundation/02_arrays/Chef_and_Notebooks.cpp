#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, k, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> k >> n;
        int flag = false;
        int p, c;
        for (int i = 0; i < n; i++)
        {
            cin >> p >> c;
            if (c <= k && p >= x - y)
                flag = true;
        }
        cout << (flag ? "LuckyChef\n" : "UnluckyChef\n");
    }
    return 0;
}