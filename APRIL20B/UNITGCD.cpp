#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while(t--)
    {
        int n{};
        cin >> n;
        int num_days{};
        if (n == 1)
            num_days = 1;
        else
            num_days = n / 2;

        cout << num_days << '\n';
        for (int i{1}; i <= num_days; ++i)
        {
            int even = 2 * i;
            if (n == 1)
                cout << 1 << ' ' << even-1 << '\n';
            else if (even + 1 > n)
                cout << 2 << ' ' << even-1 << ' ' << even << '\n';
            else
                cout << 3 << ' ' << even-1 << ' ' << even << ' ' << even+1 << '\n';
        }
    }
    return 0;
}