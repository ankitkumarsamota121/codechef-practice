#include<iostream>

using namespace std;

int main()
{
    int t, n, m, total;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n >> m;
        total = ((n-1) + (m-1) + ((n-1) * (m-1) * 2));
        cout << total << endl;
    }
    return 0;
}