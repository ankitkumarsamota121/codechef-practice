#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, p, total_menus=0, q;
    cin >>t;
    while(t--){
        cin >> p;
        total_menus=0;
        for(int i=11; i>=0 && p > 0; i--){
            q = p / pow(2, i);
            total_menus += q;
            p -= q * pow(2, i);
        }
        cout << total_menus << endl;
    }
    return 0;
}