#include <iostream>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while(t--)
    {
        int n{};
        cin >> n;
        int s{};
        int v{};
        int p{};
        int profit{};
        int temp{};

        while (n--)
        {
            cin >> s >> p >> v;
            s++;
            temp = (p/s) * v;
            if (temp > profit)
                profit = temp;
        }
        cout << profit << endl;
    }
    return 0;
}