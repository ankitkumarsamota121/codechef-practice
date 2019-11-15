#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, f, l;
    string n, first, last;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n;
        int first = (int)n[0] - 48;
        int last = (int)n[n.length() - 1] - 48;

        cout << first + last << endl;
    }
    return 0;
}
