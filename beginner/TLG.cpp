#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s=0, t=0, a, b, max1=0, max2=0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;

        s += a;
        t += b;
        if(s-t > max1)
            max1 = s-t;

        if(t-s > max2)
            max2 = t-s;
    }

    if (max1 > max2)
        cout << 1 << " " << (max1) << endl;
    else
        cout << 2 << " " << (max2) << endl;

    return 0;
}