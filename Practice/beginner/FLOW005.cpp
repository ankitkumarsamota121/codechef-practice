#include<iostream>

using namespace std;

int main()
{
    int t, n, notes;
    int denominations[6] = {100, 50, 10, 5, 2, 1};
    cin >> t;
    for (int i=0; i<t; i++)
    {
        notes = 0;
        cin >> n;
        for (int j=0; j<6; j++)
        {
            notes += static_cast<int>(n/denominations[j]);
            n = n%denominations[j];
        }
        cout << notes << endl;
    }
    return 0;
}