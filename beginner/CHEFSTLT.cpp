#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1, str2;
    int t, min, max;
    string::iterator it1, it2;
    cin >> t;
    cin.ignore(32767, '\n');  // ignore up to 32767 characters until a \n is removed
    for (int i=0; i<t; i++)
    {
        getline(cin, str1);
        getline(cin, str2);
        min = str1.length();
        max = 0;
        for(it1=str1.begin(), it2=str2.begin(); it1!=str1.end(); it1++, it2++)
        {
            if (*it1==*it2)
            {
                if(*it1=='?')
                {
                    min -= 1;
                    max += 1;
                }
                else
                    min -= 1;
            }
            else if ((*it1=='?') || (*it2=='?'))
            {
                min -= 1;
                max += 1;
            }
            else
            {
                max += 1;
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
}