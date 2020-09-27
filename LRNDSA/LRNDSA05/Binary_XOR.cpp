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
ll fac[N];

void preCalc() {
    fac[0] = 1;
    for (int i = 1; i < N; i++)
        fac[i] = (fac[i - 1] * i) % mod;
}

ll power(ll x, ll y, ll p) {
    ll res = 1;

    x = x % p;

    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

ll modInverse(ll n, ll p) {
    return power(n, p - 2, p);
}

ll nCrModPFermat(ll n, ll r, ll p) {
    if (r == 0)
        return 1;

    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int main() {
    a_k_s();

    preCalc();

    ll n;
    string a, b;
    w(t_) {
        cin >> n;
        cin >> a >> b;

        ll z1, z2, o1, o2;
        z1 = z2 = o1 = o2 = 0;

        for (auto c : a) (c == '0') ? z1++ : o1++;
        for (auto c : b) (c == '0') ? z2++ : o2++;

        ll d = abs(z1 - z2);
        ll m = min(min(z1, z2), min(o1, o2));

        ll ans = 0;
        FOR(i, 0, m + 1) {
            ans = (ans + nCrModPFermat(n, d + (i * 2), mod)) % mod;
        }

        cout << ans << '\n';
    }

    return 0;
}