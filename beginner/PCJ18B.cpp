#include<iostream>

using namespace std;

int main()
{
    int t, n, squares;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        squares = 0;
        cin >> n;
        for (int j=n; j>0; j-=2)
        {
            squares += (j*j);
        }
        cout << squares << endl;
    }
    return 0;
}