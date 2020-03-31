#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    int t, n, p, s;
    cin >> t;
    while(t)
    {
        int score = 0;
        map<int, int> m;
        cin >> n;
        for (int i=0; i<n; i++)
        {
            cin >> p;
            cin >> s;
            if(m.count(p))
            {
                if(s > m[p])
                    m[p] = s;
            }
            else
                m.insert({p, s});
        }
        for(auto itr = m.begin(); itr != m.end(); ++itr)
            {
                if (itr->first <= 8)
                    score += itr->second;
            }
        cout << score << endl;
        t--;
    }
    return 0;
}