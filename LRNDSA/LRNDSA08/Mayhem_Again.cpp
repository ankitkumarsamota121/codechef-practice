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
const int N = 1e3 + 5;
ll n, m;
int mat[N][N], visited[N][N];
unordered_map<ll, pll> M;

void flood_fill(int i, int j, int strength, int counter) {
    // cout << i << ' ' << j << endl;
    if (i >= n || i < 0 || j >= m || j < 0 || mat[i][j] != strength || visited[i][j]) {
        return;
    }

    visited[i][j] = 1;
    M[counter].ss++;

    flood_fill(i - 1, j, strength, counter);
    flood_fill(i, j + 1, strength, counter);
    flood_fill(i + 1, j, strength, counter);
    flood_fill(i, j - 1, strength, counter);
}

int main() {
    // a_k_s();

    cin >> n >> m;

    memset(mat, 0, sizeof mat);
    memset(visited, 0, sizeof visited);

    FOR(i, 0, n) {
        FOR(j, 0, m) {
            cin >> mat[i][j];
        }
    }

    // cout << "reached" << '\n';
    int counter = 0;
    FOR(i, 0, n) {
        FOR(j, 0, m) {
            if (!visited[i][j]) {
                counter++;
                M[counter].ff = mat[i][j];
                flood_fill(i, j, mat[i][j], counter);
            }
        }
    }

    ll ans1, ans2;
    ans2 = INT_MIN;

    for (auto p : M) {
        // cout << p.ff << "=>" << p.ss << endl;
        if (p.ss.ss > ans2 || (ans2 == p.ss.ss && p.ss.ff < ans1)) {
            ans1 = p.ss.ff;
            ans2 = p.ss.ss;
        }
    }

    cout << ans1 << ' ' << ans2 << endl;

    return 0;
}