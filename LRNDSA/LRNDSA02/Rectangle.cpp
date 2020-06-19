#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

vector<pair<int, int>> A;
int L[3 * N], R[3 * N];

int main() {
    memset(R, -1, sizeof(R));
    memset(L, -1, sizeof(L));

    int n, x, y;
    cin >> n;

    A.push_back({0, 0});
    A.push_back({N, 0});
    for (int i = 1; i < N; i++) {
        A.push_back({i, 500});
    }

    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        A.push_back({x, y});
    }

    sort(A.begin(), A.end());

    stack<int> S;

    for (int id = 0; id < A.size(); id++) {
        int x = A[id].first, y = A[id].second;
        while (!S.empty() and A[S.top()].second > y) {
            R[S.top()] = x;
            S.pop();
        }
        S.push(id);
    }

    for (int id = A.size() - 1; id >= 0; id--) {
        int x = A[id].first, y = A[id].second;
        while (!S.empty() and A[S.top()].second > y) {
            L[S.top()] = x;
            S.pop();
        }
        S.push(id);
    }

    int ans = 0;
    for (int id = 0; id < A.size(); id++) {
        int x = A[id].first, y = A[id].second;
        if (L[id] == -1 or R[id] == -1 or L[id] == x or R[id] == x) continue;
        ans = max(ans, (R[id] - L[id]) * y);
    }
    cout << ans << endl;
}