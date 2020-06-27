#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int sum = 0;
        for(int i=n; i>0; i=i/10)
        {
            sum += i%10;
        }
        cout << sum << endl;
    }
    return 0;
}