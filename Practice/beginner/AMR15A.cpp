#include<iostream>

using namespace std;

int main()
{
    int n, a, evens=0, odds=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a;
        if (a%2 == 0)
            evens++;
        else
            odds++;
    }
    if (evens > odds)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;
    return 0;
}