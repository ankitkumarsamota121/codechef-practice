#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e5 + 5;
int A[N];

int32_t main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> A[i];

        if (n > 60) {
            cout << "NO\n";
            continue;
        }

        unordered_set<int> s;

        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                int res = 0;
                for (int i = l; i <= r; i++) {
                    res |= A[r];
                }
                s.insert(res);
            }
        }

        if (s.size() == (n * (n + 1) / 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}