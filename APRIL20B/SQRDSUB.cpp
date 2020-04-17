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
        vector<int> array(n);
        
        for (int &a : array)
        {
            cin >> a;
        }

        int c = 0, d = 0;

        long long int product = 1;

        for (int i{0}; i < n; i++)
        {
            if (array[i] % 2 != 0 || array[i] % 4 == 0)
                d++;

            for (int j{i + 1}; j < n; j++)
            {
                product *= array[i] * array[j];
                if (product % 2 != 0 || product % 4 == 0)
                    c++;
            }
            product = 1;
        }
        cout << c + d << endl;
    }
    return 0;
}