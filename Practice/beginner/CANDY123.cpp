#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t, l, b, nl, nb;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> l >> b;
        nl = sqrt(l);
        nb = sqrt(b);
        if (nb*(nb+1) > b)
            nb -= 1;

        if (nl > nb)
            cout << "Limak" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}