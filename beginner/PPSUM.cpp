#include<iostream>

using namespace std;

int main()
{
    int t, d, n, sum;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> d >> n;
        for (int j=0; j<d; j++)
        {
            sum = (n*(n+1))/2;
            n = sum;
        }
        cout << sum << endl;
    }
    return 0;
}