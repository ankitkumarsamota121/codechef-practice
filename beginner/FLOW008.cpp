#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n;
        if(n<10)
            cout << "What an obedient servant you are!" << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}