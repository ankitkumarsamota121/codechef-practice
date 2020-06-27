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
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char last_char = s[0];
        char curr_char;
        int pairs = 0;
        FOR(i, 1, s.length()) {
            curr_char = s[i];
            if ((last_char == 'x' and curr_char == 'y') or (last_char == 'y' and curr_char == 'x')) {
                pairs++;
                i++;
                if (i < s.length()) {
                    last_char = s[i];
                }
            } else {
                last_char = curr_char;
            }
        }
        cout << pairs << endl;
    }
    return 0;
}