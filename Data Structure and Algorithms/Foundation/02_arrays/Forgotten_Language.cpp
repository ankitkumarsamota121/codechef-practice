#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string lang[n];
        int l, status[n]{0};

        for (int i = 0; i < n; i++)
            cin >> lang[i];

        while (k--)
        {
            cin >> l;
            string phrase[l];
            for (int j = 0; j < l; j++)
            {
                cin >> phrase[j];
                for (int s = 0; s < n; s++)
                    if (lang[s] == phrase[j])
                        status[s] = 1;
            }
        }

        for (int i = 0; i < n; i++)
            cout << (status[i] ? "YES " : "NO ");

        cout << endl;
    }
    return 0;
}