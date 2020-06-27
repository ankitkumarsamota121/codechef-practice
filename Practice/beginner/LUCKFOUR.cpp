#include <iostream>

using namespace std;

int main()
{
    int t, n,counter, digit;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        counter = 0;
        cin >> n;
        while(n>0)
        {
            digit = n % 10;
            n /= 10;
            if (digit == 4)
            {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}