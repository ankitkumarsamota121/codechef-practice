#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    while (true){
        ll n;
        cin >> n;
        if (n == 0)
            return 0;
        ll heights[n];
        for (ll i = 0; i < n ; i++)
            cin >> heights[i];
        
        stack<ll> S;
        ll tp;
        ll area_with_top;
        ll max_area = 0;

        int i = 0;
        while (i < n){
            if (S.empty() || heights[i] >= heights[S.top()]){
                S.push(i++);
            }
            else{
                tp = S.top();
                S.pop();
                area_with_top = heights[tp] * (S.empty() ? i : i - S.top() - 1);
                if (max_area < area_with_top)
                    max_area = area_with_top;
            }
        }

        while (!S.empty())
        {
            tp = S.top();
            S.pop();
            area_with_top = heights[tp] * (S.empty() ? i : i - S.top() - 1);
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
        
        cout << max_area << endl;
    }
    return 0;
}