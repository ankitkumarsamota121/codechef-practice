#include<iostream>

using namespace std;
bool prime(int);

int main()
{
    int t, x, y, z;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> x >> y;
        z = 1;
        while(prime(x+y+z) != true)
        {
            z++;
        }
        cout << z << endl;

    }
    return 0;
}

bool prime(int n)
{
    int flag=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i == 0)
            flag++;
    }
    if (flag == 2)
        return true;
    return false;
}