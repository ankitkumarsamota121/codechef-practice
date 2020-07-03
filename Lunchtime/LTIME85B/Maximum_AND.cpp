#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define FOREACH(i, c) for (__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
#define FORE(i, a, n) for (i = (a); i < (int)(n); ++i)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair

#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>

#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int> >

#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

#define mod 1000000007
#define inf 1e18

#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

ll mpow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res % mod;
}

void a_k_s() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
}

int main() {
    a_k_s();

    ll n, k;
    ll a[100005];
    ll bit_count[32]{0};
    ll bits[32]{0};
    w(t) {
        memset(a, 0, sizeof(a));
        memset(bit_count, 0, sizeof(bit_count));
        memset(bits, 0, sizeof(bits));

        cin >> n >> k;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            ll x = a[i];
            ll j = 0;
            while (x) {
                if (x & 1) {
                    bit_count[j]++;
                }
                j++;
                x >>= 1;
            }
        }

        for (ll i = 0; i < 32; i++) {
            bits[i] = (bit_count[i] * (1ll << i));
            // cout << bits[i] << ' ';
        }
        // cout << endl;

        ll ans = 0;
        while (k--) {
            ll m = -1;
            ll mi = -1;
            for (ll i = 0; i < 32; i++) {
                if (bits[i] > m) {
                    m = bits[i];
                    mi = i;
                }
            }

            bits[mi] = 0;
            ans += (1ll << mi);
        }

        cout << ans << endl;

        // ll s = 0;
        // for (ll i = 0; i < n; i++) {
        //     s += (ans & a[i]);
        // }
        // cout << s << endl;
    }

    return 0;
}