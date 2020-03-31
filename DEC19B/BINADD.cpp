#include<bits/stdc++.h>

using namespace std;

long long int binary_to_decimal(string n)
{
    long long int decimal = 0;
    for(int i = n.length()-1, j=0; i>=0; i--, j++)
    {
        decimal += (int(n[j]) - 48) * pow(2, i);
    }
    return decimal;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t)
    {
        long long int da, db, U, V;
        string a, b;
        getline(cin, a);
        getline(cin, b);
        da = binary_to_decimal(a);
        db = binary_to_decimal(b);
        // cout << da << '\t' << db << endl;
        long long int counter = 0;
        while(db>0)
        {
            ++counter;
            U = da ^ db;
            V = da & db;
            da = U;
            db = V * 2;
            // cout << U << "\t" << V << endl;
        }
        cout << counter << endl;
        t--;
    }
    return 0;
}