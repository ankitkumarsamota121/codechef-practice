#include <bits/stdc++.h>
using namespace std;

long long sumDigits(long long n)
{
    long long sum_digits{};
    while (n / 10)
    {
        sum_digits += n % 10;
        n /= 10;
    }
    if ((sum_digits / 10) == 0)
        return sum_digits;
    else
        sumDigits(sum_digits);
}

int main()
{
    int t{};
    cin >> t;
    while(t--)
    {
        long long k{};
        int d0{};
        int d1{};
        cin >> k >> d0 >> d1;
        long long sum_digits{ d0 + d1 };

        for (long long i{ 0 }; i < k-2; ++i)
        {
            sum_digits += (sum_digits % 10);
        }
        
        int final_sum { sumDigits(sum_digits) };

        for (long long i{ 0 }; i < k-2; ++i)
        {
            sum_digits += (sum_digits % 10);
        }

        if (sum_digits % 3)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}