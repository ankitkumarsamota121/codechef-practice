#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int num_activities{};
        string origin{};
        int laddus{ 0 };
        cin >> num_activities;
        cin >> origin;
        cin.ignore(32767, '\n');

        string activity{};
        int rank{};
        int severity{};
        for(int i{ 0 }; i < num_activities; ++i)
        {
            cin >> activity;
            if (activity == "CONTEST_WON")
            {
                cin >> rank;
                laddus += (300 + 20 - rank);
            }
            else if (activity == "TOP_CONTRIBUTOR")
                laddus += 300;
            else if (activity == "BUG_FOUND")
            {
                cin >> severity;
                laddus += severity;
            }
            else
                laddus += 50;
        }

        int num_months{};
        if (origin == "INDIAN")
            num_months = (laddus / 200);
        else
            num_months = (laddus / 400);
        // getline(cin, origin);
        cout << num_months << '\n';
    }
    return 0;
}