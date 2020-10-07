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

const int N = 52;

ll dp[60][60][1380];
ll l, s;

ll solve(ll i, ll len, ll cost) {
    // Base Case
    if (i > N) {
        return (len == l && cost == s);
    }

    // Look Up
    if (dp[i][len][cost] != -1) {
        return dp[i][len][cost];
    }

    // Recursive Case
    // 1. Leave the element
    ll o1 = solve(i + 1, len, cost);

    // 2. Take the element
    ll o2 = solve(i + 1, len + 1, cost + i);

    return dp[i][len][cost] = o1 + o2;
}

int main() {
    a_k_s();

    ll t, T;
    cin >> T;
    t = 1;
    while (t <= T) {
        memset(dp, -1, sizeof dp);

        cin >> l >> s;
        ll ans = 0;
        if (l <= 53 && s < 1380) {
            ans = solve(1, 0, 0);
        }
        cout << "Case " << t << ": " << ans << '\n';
        t++;
    }

    return 0;
}