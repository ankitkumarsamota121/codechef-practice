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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        FOR(i, 0, n) cin >> arr[i];
        
        vector<int> dist;
        int t = 1;
        // int i = 0;
        FOR(i, 0, n-1) {
            if (arr[i+1] - arr[i] <= 2) t++;
            else {
                dist.pb(t);
                t = 1;
            }
        }

        dist.pb(t);

        int min = n, max = 0;
        FOREACH(d, dist){
            if (d < min) min = d;
            if (d > max) max = d;
        }

        cout << min << ' ' << max << endl;
    }
    return 0;
}