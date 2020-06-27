#include <iostream>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n >> m;
        if ((n*m)%2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}