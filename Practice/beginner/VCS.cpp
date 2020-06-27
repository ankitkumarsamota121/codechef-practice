#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m, k;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n >> m >> k;
        int files[n], ignored[m], tracked[k], unignored[n-m], untracked[n-k];
        vector<int> v(n);
        vector<int>::iterator it, ls;

        for (int j=0; j<n; j++)
        {
            files[j] = j+1;
        }
        for (int p=0; p<m; p++)
        {
            cin >> ignored[p];
        }
        for (int q=0; q<k; q++)
        {
            cin >> tracked[q];
        }


        ls = set_difference(files, files+n, ignored, ignored+m, v.begin());
        int x=0;
        for (it=v.begin(); it != ls; it++)
        {
            unignored[x] = *it;
            x++;
        }


        ls = set_difference(files, files+n, tracked, tracked+k, v.begin());
        int y=0;
        for (it=v.begin(); it != ls; it++)
        {
            untracked[y] = *it;
            y++;
        }


        int ti=0, uu=0;

        ls = set_intersection(ignored, ignored+m, tracked, tracked+k, v.begin());
        for (it=v.begin(); it != ls; it++)
        {
            ti++;
        }

        ls = set_intersection(unignored, unignored+(n-m), untracked, untracked+(n-k), v.begin());
        for (it=v.begin(); it != ls; it++)
        {
            uu++;
        }

        cout << ti << " " << uu << endl;
    }
    return 0;
}