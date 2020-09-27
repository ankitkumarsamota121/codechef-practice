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

const int N = 5000;
ll p[N]{0};
vector<ll> primes;

void sieve() {
    p[0] = p[1] = 1;

    for (ll i = 2; i < N; i += 2) p[i] = 1;
    p[2] = 0;

    for (ll i = 3; i < N; i += 2) {
        for (ll j = i * i; j < N; j += i) {
            p[j] = 1;
        }
    }

    FOR(i, 0, N) {
        if (!p[i]) primes.pb(i);
    }
}

int main() {
    a_k_s();

    sieve();

    ll n;
    ll a[10005];
    w(t_) {
        cin >> n;
        FOR(i, 0, n) {
            cin >> a[i];
        }

        ll ans = 0;
        FOR(i, 1, n) {
            if (a[i] < a[i - 1]) {
                ans += (a[i - 1] - a[i]);
                a[i] = a[i - 1];
            }
        }

        ll cnt = INT_MAX;
        for (auto x : primes) {
            ll temp = 0;
            FOR(i, 0, n) {
                if (a[i] % x == 0) continue;
                temp += (x - (a[i] % x));
            }
            // if (temp > cnt) break;
            cnt = min(cnt, temp);
        }

        cout << (ans + cnt) << '\n';
    }
    return 0;
}