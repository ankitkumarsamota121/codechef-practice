#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int g{};
        cin >> g;
        while(g--)
        {
            int i{};
            int n{};
            int q{};
            int heads{};
            int tails{};
            cin >> i >> n >> q;
            if (n%2)
            {
                if (i == 1)
                {
                    tails = n/2 + 1;
                    heads = n/2;
                }
                else
                {
                    tails = n/2;
                    heads = n/2 + 1;
                }
                
            }
            else
            {
                heads = n/2;
                tails = n/2;
            }
            
            if (q==1)
                cout << heads << '\n';
            else
                cout << tails << '\n';
        }
    }
    return 0;
}