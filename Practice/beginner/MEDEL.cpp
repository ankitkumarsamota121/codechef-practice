#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--){
        int n{};
        cin >> n;

        int smallest{};
        int largest {};
        int smaller_posn{0};
        int larger_posn{0};
        smallest = int(INFINITY);
        largest = 0;
        for (int i{0}; i<n; i++){
            int a{};
            cin >> a;
            if (a < smallest){
                smallest = a;
                smaller_posn = i;
            }
            if (a > largest){
                largest = a;
                larger_posn = i;
            }
        }
        if (smaller_posn < larger_posn)
            cout << smallest << ' ' << largest << endl;
        else
            cout << largest << ' ' << smallest << endl;
    }
    return 0;
}