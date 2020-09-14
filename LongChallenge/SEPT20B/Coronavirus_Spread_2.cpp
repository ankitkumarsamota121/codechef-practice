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

int ans[10];

int bfs(vector<pair<int, double>> gr[], queue<pair<int, double>> Q, int visited[]) {
    int count = 0;

    while (!Q.empty()) {
        auto p = Q.front();
        Q.pop();
        for (int j = 0; j < gr[p.ff].size(); j++) {
            if (visited[gr[p.ff][j].ff] == 0 and p.ss < gr[p.ff][j].ss) {
                visited[gr[p.ff][j].ff]++;
                Q.push(gr[p.ff][j]);
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    int v[10];
    w(t_) {
        cin >> n;
        FOR(i, 1, n + 1) {
            cin >> v[i];
        }

        vector<pair<int, double>> gr[10];
        FOR(i, 1, n + 1) {
            FOR(j, 1, n + 1) {
                if (i != j) {
                    if (i > j and v[i] - v[j] < 0) {
                        gr[i].push_back({j, (double)(i - j) / (v[j] - v[i])});
                    }
                    if (i < j and v[i] - v[j] > 0) {
                        gr[i].push_back({j, (double)(j - i) / (v[i] - v[j])});
                    }
                }
            }
        }

        int best = INT_MAX;
        int worst = INT_MIN;

        FOR(i, 1, n + 1) {
            int visited[10]{0};
            queue<pair<int, double>> Q;
            visited[i]++;
            ans[i] = 1;

            for (int j = 0; j < gr[i].size(); j++) {
                visited[gr[i][j].ff]++;
                Q.push(gr[i][j]);
                ans[i]++;
            }
            ans[i] += bfs(gr, Q, visited);

            best = min(ans[i], best);
            worst = max(ans[i], worst);
        }

        cout << best << ' ' << worst << endl;
    }
    return 0;
}