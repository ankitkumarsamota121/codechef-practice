#include<iostream>

using namespace std;

int main()
{
    int t, n, b, w, h, p;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int area = 0;
        cin >> n >> b;
        for (int j=0; j<n; j++)
        {
            cin >> w >> h >> p;
            if ((p<=b) && ((w*h)>area))
            {
                area = w*h;
            }
        }
        if (area == 0)
            cout << "no tablet" << endl;
        else
            cout << area << endl;
    }
    return 0;
}