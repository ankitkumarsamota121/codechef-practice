#include<iostream>

using namespace std;

int main()
{
    int n, k, counter=0;
    cin >> n;
    cin >> k;
    long long int t;
    for (int i=0; i<n; i++)
    {
        cin >> t;
        if(t%k == 0)
            counter++;
    }
    cout << counter << endl;
    return 0;
}