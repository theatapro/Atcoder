#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

// ll sequence(ll top, ll keta)
// {
// 	ll ret = A;
// 	rep(i,1,B)
// 		ret = A*A;
// 	return(ret);
// }

int	main(void)
{
	ll Q;
	cin >> Q;
	const ll mod = 13;
	ll top_mod = 1%mod;
	ll now = 1;
	queue<int> que;
	que.push(1);
	vector<ll> top_mod_vec;
	top_mod_vec.push_back(1);
	ll n = 0;

	rep(i,0,Q)
	{
		int q;
		cin >> q;
		if(q==1)
		{
			int x;
			cin >> x;
			now = now*10 + x;
			now %= mod;
			rep(i,0,top_mod_vec.size())
			{
				top_mod_vec[i] *= 10;
				top_mod_vec[i] %= mod;
			}
			top_mod_vec.push_back(x);
		}
		if(q==2)
		{
			now += mod;
			now -= top_mod_vec[n];
			now %= mod;
			top_mod_vec.erase(top_mod_vec.begin());
			n++;
		}
		if(q==3)
		{
			cout << now % mod << endl;
		}
	}

	return(0);
	
}
