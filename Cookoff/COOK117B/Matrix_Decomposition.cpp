#include <bits/stdc++.h>
using namespace std;
long long mod{1000000007};

long long power(long long x, unsigned long long y)
{
    long long p = mod;
    long long res = 1;

    x = x % p;

    if (x == 0)
        return 0;
        
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        long long n;
        long long a;
        cin >> n >> a;
        long long sum{0};
        long long p_i{1};

        for(int i=1, j=1; i <= n ; i++, j+=2)
        {
            p_i = power(a, j);
            // std::cout << a%mod << endl;
            a = ((a % mod) * (p_i % mod)) % mod;
            // cout << a << endl;
            sum += p_i;
        }
        cout << sum%mod << endl;
    }
    return 0;
}