#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string n, num, reverse_num;
    cin >> t;
    cin.ignore(32627, '\n');
    for (int i=0; i<t; i++)
    {
        getline(cin, n);
        num = n;
        reverse_num = n;
        reverse(reverse_num.begin(), reverse_num.end());

        if (num == reverse_num)
            cout << "wins" << endl;
        else
            cout << "losses" << endl;
    }
    return 0;
}