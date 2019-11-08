#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        cout << static_cast<int>(sqrt(n)) << endl;
    }
    return 0;
}