#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t)
    {
        int zeros=0;
        cin >> n;
        for (int i=5; n/i > 0; i *=5)
        {
            zeros += n/i;
        }
        cout << zeros << endl;
        t--;
    }
    return 0;
}