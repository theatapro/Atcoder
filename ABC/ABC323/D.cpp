#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int	main(void)
{
	map<ll,ll> mp;
	int a,b;
	cin >> a >> b;
	mp[a] = b;
	while(mp.size())
	{
		ll mina = mp.begin()->first;
		ll minb = mp.begin()->second;
		cout << a << b << endl;
		mp.erase(mp.begin());
	}
	
	return(0);	
}
