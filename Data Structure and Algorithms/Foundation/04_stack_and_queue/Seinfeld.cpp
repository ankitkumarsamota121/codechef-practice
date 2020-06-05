#include <bits/stdc++.h>
using namespace std;

#define FOREACH(i, c) for (__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
#define FORE(i, a, n) for (i = (a); i < (int)(n); ++i)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()

#define ll long long
#define pb push_back
#define error(x) cout << #x << " = " << (x) << endl;
#define ull unsigned long long
#define F first
#define S second
#define mk make_pair
#define mod 1000000007 // 10e9 + 7

#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>

int main()
{
    ll num = 0;
    while (true)
    {
        num++;
        string S;
        cin >> S;
        if (S[0] == '-')
            break;

        // stack<char> st;
        ll tf = 0;
        ll tb = 0;
        FOR(i, 0, S.length()){
            if (S[i] == '{')
                tf++;
            else if (tf > 0)
                tf--;
            else
                tb++;
        }

        ll conv = (ceil(tf/2.0) + ceil(tb/2.0));

        cout << num << ". " << conv << endl;
    }
    return 0;
}