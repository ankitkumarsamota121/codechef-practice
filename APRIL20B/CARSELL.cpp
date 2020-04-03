#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int mod {1'000'000'007};
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        cin >> n;
        vector<int> prices(n);
        for (int &price : prices)
            cin >> price;

        sort(begin(prices), end(prices), greater<int>{});

        long long int total_profit{};

        for (int i{ 0 }; i < n; ++i)
        {
            if ((prices[i] - i) > 0)
            {
                total_profit += ((prices[i] - i) % mod);
            }
        }
        total_profit = (total_profit % mod);

        cout << total_profit << '\n';
    }
    return 0;
}