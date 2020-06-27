#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while(t--){
        int n{};
        int k{};
        int count{0};
        cin >> n >> k;
        for (int i{0}; i<n; i++){
            int characteristic{};
            cin >> characteristic;
            if (((characteristic + k) % 7) == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}