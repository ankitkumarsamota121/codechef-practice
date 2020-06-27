#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int n, q, f, d, dist;
        cin >> n >> q;
        long long num = 0;
        int start = 0;
        while (q--)
        {
            cin >> f >> d;
            dist = (abs(f - start) + abs(d - f));
            num += dist;
            start = d;
            // cout << dist << endl;
        }
        cout << num << endl;
    }
    return 0;
}