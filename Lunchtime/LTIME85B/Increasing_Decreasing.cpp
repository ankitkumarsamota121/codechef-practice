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

    ll n;
    ll a[200005]{0};
    int pre_cnt[200005]{0};
    w(t) {
        cin >> n;
        bool flag = true;
        vector<ll> ans;

        memset(pre_cnt, 0, sizeof(pre_cnt));
        memset(a, 0, sizeof(a));

        FOR(i, 0, n) {
            cin >> a[i];
            pre_cnt[a[i]]++;
            if (pre_cnt[a[i]] > 2) {
                flag = false;
            }
        }

        if (flag) {
            sort(a, a + n);

            if (pre_cnt[a[n - 1]] > 1) {
                flag = false;
            } else {
                for (int i = 0; i < n - 1; i += 2) {
                    ans.push_back(a[i]);
                }

                ans.push_back(a[n - 1]);

                for (int i = ((n & 1) ? n - 2 : n - 3); i > 0; i -= 2) {
                    ans.push_back(a[i]);
                }
            }
        }

        if (flag) {
            cout << "YES\n";
            for (auto x : ans) {
                cout << x << ' ';
            }
            cout << endl;
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}