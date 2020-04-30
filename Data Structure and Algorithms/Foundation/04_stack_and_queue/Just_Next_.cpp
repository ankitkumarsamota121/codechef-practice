#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> arr;
        int temp;
        for (int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }

        bool flag = next_permutation(arr.begin(), arr.end());
        
        if (flag)
            for (int i = 0; i<n; i++)
                cout << arr[i];
        else
            cout << -1;
        
        cout << endl;        
    }
    return 0;
}