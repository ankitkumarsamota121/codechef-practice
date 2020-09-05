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
#define pqs priority_queue<int, vi, greater<int>>

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

void dfs(vector<int> gr[], int dist[], int in[], int out[], int src, int &timer) {
    in[src] = timer;
    for (auto nbr : gr[src]) {
        if (dist[nbr] == -1) {
            dist[nbr] = dist[src] + 1;
            dfs(gr, dist, in, out, nbr, ++timer);
        }
    }
    ++timer;
    out[src] = timer;
}

int main() {
    a_k_s();

    ll n;
    w(t_) {
        cin >> n;
        vector<int> gr[n];

        FOR(i, 0, n - 1) {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            gr[u].pb(v);
            gr[v].pb(u);
        }

        string colors;
        cin >> colors;

        int r = 0, b = 0;
        for (auto c : colors) {
            (c == '0') ? r++ : b++;
        }

        // cout << r << ' ' << b << endl;

        int dist[n], in[n], out[n], correct[n];
        memset(dist, -1, sizeof(dist));

        dist[0] = 0;
        int timer = 1;
        dfs(gr, dist, in, out, 0, timer);

        int odd = 0, even = 0;
        FOR(i, 0, n) {
            (dist[i] & 1) ? odd++ : even++;
        }

        // cout << odd << ' ' << even << endl;

        if ((odd == r && even == b) || (odd == b && even == r)) {
            vector<vector<int>> red;
            vector<vector<int>> blue;
            if (odd == r && even == b) {
                FOR(i, 0, n) {
                    correct[i] = ((dist[i] & 1) ? 0 : 1);
                }
            } else {
                FOR(i, 0, n) {
                    correct[i] = ((dist[i] & 1) ? 1 : 0);
                }
            }

            FOR(i, 0, n) {
                if (correct[i] == 0 && colors[i] == '1') {
                    red.pb({dist[i], in[i], out[i]});
                }
                if (correct[i] == 1 && colors[i] == '0') {
                    blue.pb({dist[i], in[i], out[i]});
                }
            }

            ll ans = 0;

            FOR(i, 0, red.size()) {
                if ((red[i][1] < blue[i][1] && red[i][2] > blue[i][2]) || (blue[i][1] < red[i][1] && blue[i][2] > red[i][2])) {
                    ans += abs(red[i][0] - blue[i][0]);
                } else {
                    ans += abs(red[i][0] + blue[i][0]);
                }
            }

            cout << ans << endl;
        } else {
            cout << -1 << endl;
            continue;
        }
    }

    return 0;
}