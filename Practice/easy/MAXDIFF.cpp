#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> weights, smaller_weights;

        int i;
        while(n--){
            cin >> i;
            weights.push_back(i);
        }

        for (int j=0; j<k; j++){
            int smallest = weights[0];
            for (auto it=weights.begin(); it != weights.end(); ++it){
                if (*it < smallest){
                    smallest = *it;
                }
            }
            smaller_weights.push_back(smallest);
            weights.erase(find(weights.begin(), weights.end(), smallest));
        }

        int bigger_sum = 0;
        for (auto it=weights.begin(); it != weights.end(); ++it){
            bigger_sum += *it;
        }

        int smaller_sum = 0;
        for (auto it=smaller_weights.begin(); it != smaller_weights.end(); ++it){
            smaller_sum += *it;
        }

        cout << bigger_sum - smaller_sum << endl;
    }
    return 0;
}