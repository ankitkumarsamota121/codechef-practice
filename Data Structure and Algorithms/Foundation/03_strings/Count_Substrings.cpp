#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long ones{0};

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ones++;
        }

        cout << (ones * (ones + 1)) / 2 << endl;
    }
    return 0;
}