#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n{};
    cin >> n;
    vector<long long> customers(n);
    for (auto &customer : customers)
        cin >> customer;

    sort(customers.begin(), customers.end());

    long long max{0};
    for (int i{0}, j{n}; i < n; ++i, --j)
    {
        if (customers[i] * j >= max)
            max = customers[i] * j;
    }
    cout << max << '\n';
    return 0;
}