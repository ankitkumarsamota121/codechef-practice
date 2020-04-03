#include <bits/stdc++.h>
using namespace std;


int primeFactors(int n)
{
    int prime_factors{ 0 };
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        prime_factors++;
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            // cout << i << " ";
            prime_factors++;
            n = n / i;
        }
    }

    if (n > 2)
        // cout << n << " ";
        prime_factors++;

    return prime_factors;
}


int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int x{};
        int k{};
        cin >> x;
        cin >> k;

        int k_limit = primeFactors(x);
        
        if (k <= k_limit)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}