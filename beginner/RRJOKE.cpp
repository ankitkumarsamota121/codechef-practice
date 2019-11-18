#include<iostream>

using namespace std;

int main()
{
    int t, n, x, ans;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0; i< n*2; i++)
        {
            cin >> x;
        }
        ans = 0;
        for(int i=1; i<=n; i++)
        {
            ans ^= i;
        }
        cout << ans << endl;
    }
    return 0;
}