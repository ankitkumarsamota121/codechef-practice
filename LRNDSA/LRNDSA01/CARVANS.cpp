#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        cin >> n;
        int cars_max{ 1 };
        int front_car{};
        cin >> front_car;
        int max{ front_car };
        for (int i{ 0 }; i < n-1; ++i)
        {
            cin >> front_car;
            if (max >= front_car)
            {
                cars_max++;
                // cout << max << ' ' << front_car << '\t';
                max = front_car;
            }
            // front_car = second_car;
        }
        cout << '\n';
        cout << cars_max << '\n';
    }
    return 0;
}