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
        int d2{};

        long long int sum_digits{};
        cin >> k >> d0 >> d1;

        sum_digits = d0 + d1;

        if (k > 2)
        {
            d2 = ((d0 + d1) % 10);
            sum_digits += d2;
        }
        
        
        if (k > 3)
        {
            array<int, 4> r;
            r[0] = (2 * d2) % 10;
            r[1] = (4 * d2) % 10;
            r[2] = (8 * d2) % 10;
            r[3] = (6 * d2) % 10;

            long long repeat_sum { r[0] + r[1] + r[2] +r[3] };

            sum_digits += (repeat_sum * ((k-3)/4));

            for (int i{ 0 }; i<((k-3)%4); ++i)
            {
                sum_digits += r[i];
            }
        }


        if (sum_digits % 3)
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }
    return 0;
}