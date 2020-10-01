#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// ############################################################################################

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

// ############################################################################################

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

const ll N = 1e5 + 5;

ll pre0[N], pre1[N];

ll calcPairs(ll x, ll n) {
    ll len = (x * x + x);
    ll i = 1;
    ll j = len;

    ll cnt = 0;

    while (j <= n) {
        ll c0 = pre0[j] - pre0[i - 1];
        ll c1 = pre1[j] - pre1[i - 1];
        if (c0 == (c1 * c1)) cnt++;
        i++;
        j++;
    }

    return cnt;
}

int main() {
    a_k_s();

    ll n;
    string s;
    w(t_) {
        memset(pre0, 0, sizeof pre0);
        memset(pre1, 0, sizeof pre1);

        cin >> s;
        n = s.length();

        FOR(i, 1, n + 1) {
            pre0[i] = (s[i - 1] == '0' ? (pre0[i - 1] + 1) : pre0[i - 1]);
            pre1[i] = (s[i - 1] == '1' ? (pre1[i - 1] + 1) : pre1[i - 1]);
        }

        // FOR(i, 1, n + 1) {
        //     cout << pre0[i] << ' ';
        // }
        // cout << endl;

        ll x = (sqrt(1 + 4 * n) - 1) / 2;

        ll ans = 0;
        FOR(i, 1, x + 1) {
            ans += calcPairs(i, n);
        }

        cout << ans << '\n';
    }

    return 0;
}