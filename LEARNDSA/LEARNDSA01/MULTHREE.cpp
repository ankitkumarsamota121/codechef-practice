#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while(t--)
    {
        long long k{};
        int d0{};
        int d1{};

        long long int sum_digits{};
        cin >> k >> d0 >> d1;

        sum_digits = (d0 + d1);

        for (int i{2}; i< k; ++i)
            sum_digits += (sum_digits % 10);

        // std::cout << sum_digits << '\n';

        if (sum_digits % 3)
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }
    return 0;
}