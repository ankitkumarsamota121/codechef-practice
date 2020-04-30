#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int min{ 10001 };
        int total{ 0 };
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] < min)
                min = s[i];
        }

        for (int i = 0; i < n; i++)
        {
            total += (s[i] - min);
        }
        cout << total << endl;
    }
    return 0;
}