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

        for (int day{1}, page{1}; day <= num_days; ++day)
        {
            if (day == 1)
            {
                if (n == 1)
                {
                    cout << 1 << ' ' << page << '\n';
                }
                else if (n == 2)
                {
                    cout << 2 << ' ' << page << ' ' << page+1 << '\n';
                }
                else
                {
                    cout << 3 << ' ' << page << ' ' << page+1 << ' ' << page+2 << '\n';
                    page += 3;
                }
            }
            else if (day == num_days)
            {
                if (n%2)
                {
                    cout << 2 << ' ' << page << ' ' << page+1 << '\n';
                }
                else
                {
                    cout << 1 << ' ' << page << '\n';
                }
            }
            else
            {
                cout << 2 << ' ' << page << ' ' << page+1 << '\n';
                page += 2;
            }
        }
    }
    return 0;
}