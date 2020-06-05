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
    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        int coins[3]{};
        bool ans = true;
        FOR(i, 0, n) {
            cin >> a;
            if (a == 5) {
                coins[0]++;
            } else if (a == 10) {
                if (coins[0] < 1) {
                    ans = false;
                    continue;
                }
                coins[0]--;
                coins[1]++;
            } else {
                if (coins[1] > 0) {
                    coins[1]--;
                    coins[2]++;
                } else if (coins[0] > 1) {
                    coins[0] -= 2;
                    coins[2]++;
                } else {
                    ans = false;
                }
            }
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}