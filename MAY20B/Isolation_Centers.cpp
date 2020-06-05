#include <bits/stdc++.h>
using namespace std;

#define FOREACH(i, c) for (auto &i : c)
#define FOR(i, a, n) for (int i = (a); i < (int)(n); ++i)
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

ll mpow(ll base, ll exp)
{
    ll res = 1;
    while (exp > 0)
    {
        if (exp % 2)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res % mod;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q, c;
        string s;
        cin >> n >> q;
        cin.ignore(32767, '\n');
        getline(cin, s);
        ll v[26]{ 0 };
        FOR(i, 0, n) v[s[i] - 'a']++;
        ll pending = 0;
        while (q--){
            pending = 0;
            cin >> c;
            FOR(i, 0, 26)
                if (v[i] > c)
                    pending += (v[i] - c);
            cout << pending << endl;
        }

    }
    return 0;
}