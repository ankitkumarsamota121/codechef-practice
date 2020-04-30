#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string s1;
        string s2;
        
        int mid = s.length()/2;

        s1 = s.substr(0, mid);
        if (s.length() % 2 == 0)
            s2 = s.substr(mid, mid);
        else
            s2 = s.substr(mid+1, mid);


        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        cout << (s1 == s2 ? "YES\n" : "NO\n");
    }
    return 0;
}