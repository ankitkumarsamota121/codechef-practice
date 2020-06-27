#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t, n, num, reverse_num, counter;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n;
        num = n;
        reverse_num = 0;
        counter = 0;
        while(n>0)
        {
            counter++;
            n = n/10;
        }

        n = num;

        for (int j=counter-1; j>=0; j--)
        {
            reverse_num += pow(10, j)*(n%10);
            n = n/10;
        }

        if (num == reverse_num)
            cout << "wins" << endl;
        else
            cout << "losses" << endl;
    }
    return 0;
}