#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


ll nCr(ll n, ll r)
{
	ll res=1;

	if (r > n)
		return 0;

	if (r > n-r)
		return nCr(n, n-r);

	for (ll i=1; i<=r; i++)
	{
		res = (res*n)/i;
		n--;
	}
	return res;
}


int main()
{
	int t;
	ll n, k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cout << nCr(n-1, n-k) << endl;
	}
	return 0;
}