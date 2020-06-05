#include <bits/stdc++.h>
using namespace std;

#define FOREACH(i, c)  for (__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n)   for (register int i = (a); i < (int)(n); ++i)
#define FORE(i, a, n)  for (i = (a); i < (int)(n); ++i)
#define Size(n)        ((int)(n).size())
#define all(n)         (n).begin(), (n).end()

#define ll             long long
#define pb             push_back
#define error(x)       cout << #x << " = " << (x) << endl;
#define ull            unsigned long long
#define F              first
#define S              second
#define mk             make_pair
#define mod            1000000007  // 10e9 + 7

#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>

int solve(vector<int> v){
    int res = (v[0] ^ v[1]), n = Size(v);
    vector<int> st;
    FOR(i, 0, n){
        while (!st.empty() && st.back() < v[i]) st.pop_back();
        st.pb(v[i]);
        if (Size(st) >= 2) res = max(res, st[Size(st) -1] ^ st[Size(st) - 2]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];
    int res = solve(v);
    reverse(all(v));
    cout << max(res, solve(v)) << endl;
    return 0;
}