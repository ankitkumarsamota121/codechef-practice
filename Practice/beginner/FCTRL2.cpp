#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        ll fctrl=1;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            fctrl *= i;
        }
        cout << fctrl << endl;
    }
    return 0;
}