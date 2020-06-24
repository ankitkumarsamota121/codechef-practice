#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define vc vector<ll>
typedef pair<ll, ll> pairs;

ll n;
int main() {
    // your code goes here
    std::ios::sync_with_stdio(false);
    ll t, i, j, k, l, c, f, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    set<ll> s;
    i = 1;
    while (i <= n)
        cin >> a[i++];
    s.insert(1);
    a[0] = 1;
    i = 2;
    c = 1;
    while (i <= n) {
        if (a[i] % a[i - 1] != 0)
            s.insert(i);
        i++;
    }
    i = 1;
    while (i <= q) {
        cin >> c;
        if (c == 1) {
            cin >> j >> k;
            a[j] = k;
            if (k % a[j - 1] != 0)
                s.insert(j);
            else if (j != 1 && s.find(j) != s.end())
                s.erase(j);
            if (j < n && (a[j + 1] % k != 0)) {
                s.insert(j + 1);
            } else if (j < n) {
                if (s.find(j + 1) != s.end())
                    s.erase(j + 1);
            }
        } else {
            cin >> k;
            auto it = (s.lower_bound(k));
            if (it == s.end())
                cout << *(--s.end()) << "\n";
            else if (*it == k)
                cout << *it << "\n";
            else
                cout << *(--it) << "\n";
        }
        i++;
    }
    return 0;
}
