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

    ll n, a, b;
    w(t_) {
        cin >> n;
        bool flag = true;
        map<ll, ll> A, B;
        FOR(i, 0, n) {
            cin >> a;
            A[a]++;
        }

        FOR(i, 0, n) {
            cin >> b;
            if (A.count(b)) {
                A[b] -= 1;
                if (A[b] == 0) A.erase(b);
            } else {
                B[b]++;
            }
        }

        vector<int> v;
        for (auto p : A) {
            if (p.ss & 1) {
                flag = false;
            } else {
                ll d = p.ss / 2;
                while (d--) v.push_back(p.ff);
            }
        }
        for (auto p : B)
            if (p.ss & 1) {
                flag = false;
            } else {
                ll d = p.ss / 2;
                while (d--) v.push_back(p.ff);
            }

        if (flag) {
            sort(all(v));
            ll ans = 0;
            ll s = v.size() / 2;
            FOR(i, 0, s) {
                ans += v[i];
            }
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}