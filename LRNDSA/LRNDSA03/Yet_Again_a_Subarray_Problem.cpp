#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long
#define oset tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

#define int long long

const int N = 1e5;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            int freq[2001];
            for (int i = 0; i <= 2000; i++) freq[i] = 0;
            oset s;
            for (int j = i; j < n; j++) {
                int m = ceil(((double)k) / (j - i + 1));
                int k1 = ceil(((double)k) / m);
                k1--;
                s.insert({a[j], freq[a[j]]++});
                auto it = s.find_by_order(k1);
                int element = (*it).first;
                int frequency = freq[element];
                if (freq[frequency] > 0) ans++;
            }
        }
        cout << ans << endl;
    }
}