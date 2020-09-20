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

pii findH() {
    int x = 0, s = 0, e = 1000;
    int y;

    string response;

    while (s <= e) {
        int mid = (s + e) / 2;
        cout << '?' << ' ' << x << ' ' << mid << endl;
        cin >> response;

        if (response == "YES") {
            s = mid + 1;
            y = mid;
        } else {
            e = mid - 1;
        }
    }

    return make_pair(x, y);
}

pii findV1() {
    int y = 0, s = 0, e = 1000;
    int x;

    string response;

    while (s <= e) {
        int mid = (s + e) / 2;
        cout << '?' << ' ' << mid << ' ' << y << endl;
        cin >> response;

        if (response == "YES") {
            s = mid + 1;
            x = mid;
        } else {
            e = mid - 1;
        }
    }

    return make_pair(x, y);
}

pii findV2(int y) {
    int x, s = 0, e = 1000;

    string response;

    while (s <= e) {
        int mid = (s + e) / 2;
        cout << '?' << ' ' << mid << ' ' << y << endl;
        cin >> response;

        if (response == "YES") {
            s = mid + 1;
            x = mid;
        } else {
            e = mid - 1;
        }
    }

    return make_pair(x, y);
}

int main() {
    // a_k_s();

    pii H = findH();
    pii V1 = findV1();
    pii V2 = findV2(2 * V1.ff);

    int s1 = (H.ss - V2.ss) * (V2.ff);
    int s2 = 2 * V1.ff * V2.ss;

    cout << "! " << s1 + s2 << endl;

    return 0;
}