#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n], count=n;
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for (int i=0; i<n; i++)
        {
            int product = arr[i];
            int sum = arr[i];
            for (int j=i+1; j<n; j++)
            {
                product *= arr[j];
                sum += arr[j];

                if (product == sum)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}