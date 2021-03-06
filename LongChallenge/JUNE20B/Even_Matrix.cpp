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
#define mod 1000000007  // 10e9 + 7

#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>

ll mpow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res % mod;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int start;
        FOR(i, 0, n) {
            if (i % 2 == 0) {
                start = (i * n) + 1;
                for (int j = start; j < (start + n); j++) {
                    cout << j << ' ';
                }
            } else {
                start = (i + 1) * n;
                for (int j = start; j > start - n; j--) {
                    cout << j << ' ';
                }
            }
            cout << endl;
        }
    }
    return 0;
}