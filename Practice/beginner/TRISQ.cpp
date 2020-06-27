#include<iostream>

using namespace std;

int main()
{
    int t, n, num, q;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n;
        q = n/2 - 1;
        num = 0;
        for (int j=0; j<=q; j++)
        {
            num += j;
        }
        cout << num << endl;
    }
    return 0;
}