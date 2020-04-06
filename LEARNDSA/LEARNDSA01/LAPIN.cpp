#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    cin.ignore(32767, '\n');
    while(t--)
    {
        string str{};
        getline(cin, str);
        int len = str.length();
        string str1{};
        string str2{};
        if (len%2)
        {    
            str1 = str.substr(0, len/2);
            str2 = str.substr((len/2)+1);
        }
        else
        {
            str1 = str.substr(0, len/2);
            str2 = str.substr(len/2);
        }

        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1 == str2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}