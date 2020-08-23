#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define FOREACH(i, c) for (__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n) for (register ll i = (a); i < (ll)(n); ++i)
#define FORE(i, a, n) for (i = (a); i < (ll)(n); ++i)
#define Size(n) ((ll)(n).size())
#define all(n) (n).begin(), (n).end()

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair

#define pii pair<ll, ll>
#define pll pair<ll, ll>
#define pdd pair<double, double>

#define vi vector<ll>
#define mii map<ll, ll>
#define pqb priority_queue<ll>
#define pqs priority_queue<ll, vi, greater<ll>>

#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

#define mod 1000000007
#define inf 1e18

#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    ll x;     \
    cin >> x; \
    while (x--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

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
    ll a[1005];
    // ll tables[1005][105];
    // vector<vector<ll>> tables(1005);
    w(t_) {
        cin >> n >> k;

        // tables.clear();
        // FOR(i, 0, n + 1) {
        //     tables[i].clear();
        //     tables[i].resize(105);
        // }

        vector<ll> tables[n + 1];
        unordered_map<ll, ll> m;

        ll t = 1;
        FOR(i, 0, n) {
            cin >> a[i];
            if (m[a[i]] != 0) {
                t++;
            }
            m[a[i]] = 1;
            tables[t].pb(a[i]);
        }

        // Tables
        // FOR(i, 1, t + 1) {
        //     cout << i << " ==> ";
        //     for (auto x : tables[i]) {
        //         cout << x << ' ';
        //     }
        //     cout << endl;
        // }

        ll ans = (t * k);
        // ll clashes = 0;

        while (t > 1) {
            ll c = inf, t1, t2;
            // cout << t << endl;
            FOR(i, 1, t) {
                ll tc = 0;
                ll temp[105]{0};

                for (auto x : tables[i]) {
                    temp[x]++;
                }
                for (auto x : tables[i + 1]) {
                    temp[x]++;
                }

                FOR(j, 1, 101) {
                    // temp[j] = tables[i][j] + tables[i + 1][j];
                    if (temp[j] > 1) tc += temp[j];
                }
                if (tc < c) {
                    t1 = i;
                    t2 = i + 1;
                    c = tc;
                }

                // cout << i << ' ' << i + 1 << " => " << tc << endl;
            }

            for (auto x : tables[t2]) {
                tables[t1].pb(x);
            }

            FOR(i, t2, t) {
                tables[i] = tables[i + 1];
            }

            // Count Number of Clashes
            ll clashes = 0;
            FOR(i, 1, t) {
                ll temp[105]{0};
                for (auto x : tables[i]) {
                    temp[x]++;
                }

                FOR(i, 1, 101) {
                    if (temp[i] > 1) {
                        clashes += temp[i];
                    }
                }
            }

            t--;

            ans = min(ans, t * k + clashes);
        }

        cout << ans << endl;
    }

    return 0;
}