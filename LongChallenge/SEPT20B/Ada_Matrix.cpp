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

bool isSorted(int mat[64][64], int n) {
    int c = 1;
    FOR(i, 0, n) {
        FOR(j, 0, n) {
            if (mat[i][j] != c) {
                return false;
            }
            c++;
        }
    }
    return true;
}

int sum(int a[], int n) {
    int res = 0;
    FOR(i, 0, n) {
        res += a[i];
    }
    return res;
}

int main() {
    a_k_s();

    int n;
    int mat[64][64];
    int a[64];
    w(t_) {
        memset(a, 0, sizeof a);

        cin >> n;
        FOR(i, 0, n) {
            FOR(j, 0, n) {
                cin >> mat[i][j];
            }
        }

        FOR(i, 0, n) {
            a[i] = (mat[0][i] == i + 1) ? 0 : 1;
        }

        int c = 0;
        while (sum(a, n) > 0) {
            int i = n - 1;
            while (a[i] != 1 && i > 0) i--;
            if (i == 0) break;

            c++;
            a[i] = 0;
            FOR(j, 1, i) {
                a[j] = (1 - a[j]);
            }
        }

        cout << c << endl;
    }

    return 0;
}