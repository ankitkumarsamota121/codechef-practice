#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t, smallest, temp;
    cin >> t;
    long n[t];
    for (long long i=0; i<t; i++)
    {
        cin >> n[i];
    }

    for (long long i=0; i<t; i++)
    {
        smallest = n[i];
        for (long long j=0; j<t; j++)
        {
            if (n[j] > n[i])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }

    cout << endl;

    for (long long i=0; i<t; i++)
    {
        cout << n[i] << endl;
    }
    return 0;
}