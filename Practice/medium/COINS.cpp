#include<iostream>
#include<map>

using namespace std;

long long int exchanger(map<long long int, long long int> &m, long long int n)
{
    if (n == 0)
        return 0;
    if (n<12)
        return n;

    long long int a, b, c;

    if(m.count(n/2))
        a = m[n/2];
    else
        a = exchanger(m, n/2);

    if(m.count(n/3))
        b = m[n/3];
    else
        b = exchanger(m, n/3);

    if(m.count(n/4))
        c = m[n/4];
    else
        c = exchanger(m, n/4);

    m[n] = max(a+b+c, n);
    return m[n];
}

int main()
{
    long long int n;
    map <long long int, long long int> m;
    for(int i=0; i<10; i++)
    {
        cin >> n;
        cout << exchanger(m, n) << endl;
    }

    return 0;
}