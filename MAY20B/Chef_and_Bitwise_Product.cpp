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
        ll x, y, l, r;
        cin >> x >> y >> l >> r;

        ll max = -1;
        ll z;
        ll f = 0;
        // for (ll i = r; i >= l; i--){
        //     f = (x & i) * (y & i);
        //     // cout << i << ' ' << (x & i) * (y & i) << endl;
        //     // f = func(x, y, i);
        //     if (f > max){
        //         max = f;
        //         z = i;
        //     } 
                
        // }

        ll lmsb = 0;
        while(l != 0){
            l = l >> 1;
            lmsb++;
        }

        ll umsb = 0;
        while(r != 0){
            r = r >> 1;
            umsb++;
        }
        // ll lower_mask = (1<<(lmsb-1));
        ll upper_mask = ~(-1<<(umsb-1));
        // cout << lmsb << endl;
        // cout << umsb << endl;
        ll ans = (x | y);

        ans = (ans & upper_mask);
        // ans = (ans & lower_mask);

        cout << ans << endl;

        // cout << z << endl;
    }
    return 0;
}