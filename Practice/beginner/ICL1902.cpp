#include <iostream>

using namespace std;

int main()
{
    int t, n, s, counter;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n;
        counter = 0;
        while(n>0)
        {
            s = 0;
            while(((s+1)*(s+1)) <= n)
            {
                s++;
            }
            n -= (s*s);
            counter++;
        }
        cout << counter << endl;
    }
    return 0;
}