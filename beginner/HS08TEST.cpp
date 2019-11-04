#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double x;
    double y;
    cin >> x >> y;
    int a = x;

    if(!(a%5) && (x+0.5) <= y)
    {
        y -= (x+0.5);
    }
    cout << fixed << setprecision(2) << y << endl;
    return 0;
}