#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int A[n];
        bool flag = true;
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int num = 1;
        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (A[i] == A[j])
            {
                if (A[i] == num+1)
                    num++;
            }

            else
            {
                flag = false;
                break;
            }
        }

        if (num != 7)
            flag = false;

        cout << (flag ? "yes\n" : "no\n");
    }
    return 0;
}