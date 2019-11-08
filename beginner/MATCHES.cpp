#include <iostream>

using namespace std;

int main()
{
    int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t, a, b, digit, sum, matches;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> a >> b;
        sum = a + b;
        matches = 0;
        while (sum > 0)
        {
            digit = sum % 10;
            sum /= 10;
            matches += arr[digit];
        }
        cout << matches << endl;
    }
    return 0;
}