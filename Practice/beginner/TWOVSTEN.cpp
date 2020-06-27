#include <iostream>

using namespace std;

int main()
{
    int t, n,last;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n;
        last = n%10;
        if (last == 0)
            cout << 0 << endl;
        else if (last == 5)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}