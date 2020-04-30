#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if ( n == 0)
            break;
        stack<int> lane;
        vector<int> order;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            order.push_back(temp);
        }

    int need = 1;
    bool flag = true;

        for (int i = 0; i < order.size(); i++){
            while (!lane.empty() && lane.top() == need){
                need++;
                lane.pop();
            }
            if (order[i] == need)
                need++;
            else if (!lane.empty() && lane.top() < order[i]){
                flag = false;
                break;
            }
            else
                lane.push(order[i]);
        }

        cout << (flag ? "yes\n" : "no\n");
            
    }
    return 0;
}