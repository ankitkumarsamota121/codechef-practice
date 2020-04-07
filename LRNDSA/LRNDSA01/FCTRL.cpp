#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        cin >> n;
        
        int num_zeros{ 0 };

        for (int i{ 5 }; i <= n; i *= 5)
            num_zeros += (n/i);
        
        cout << num_zeros << '\n';
    }
    return 0;
}