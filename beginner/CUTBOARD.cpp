#include<iostream>

using namespace std;

int main()
{
    int t, n1, n2;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n1 >> n2;
        cout << (n1-1) * (n2-1) << endl;
    }
    return 0;
}