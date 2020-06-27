#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t)
    {
        cin >> n;
        int a, twos=0, zeros=0;
        for (int i=0; i<n; i++)
        {
            cin >> a;
            if (a==2)
                twos++;
            if (a==0)
                zeros++;
        }
        int total = (twos * (twos - 1))/2 + (zeros * (zeros - 1))/2;
        cout << total << endl;
        t--;
    }
    return 0;
}