#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

map<ll,ll> dfs_list;

ll dfs(ll n)
{
	ll ret;
	if(n<2)
		return(0);
	else if(n==2)
		return(2);
	else if(n==3)
		return(5);
	else if(n==4)
		return(8);
	else if(n==5)
		return(12);
	else if(n==6)
		return(16);
	else if(n==7)
		return(20);
	else if(n==8)
		return(24);
	else if(n==9)
		return(29);
	else if(n==10)
		return(34);
	else
	{
		ret = n;
		ll n_ret = ret;
		if(n/2 == (n+1)/2)
			ret += 2*dfs(n/2);
		// cout << ret;
		else
		{
			if(dfs_list.count(n/2))
				ret+=dfs_list.at(n/2);
			else
				ret += dfs(n/2);
			if(dfs_list.count((n+1)/2))
				ret+=dfs_list.at((n+1)/2);
			else
				ret += dfs((n+1)/2);
		}
	}
	dfs_list[n]=ret;
	return(ret);
}

int main(void)
{
	ll N;
	cin >> N;
	ll ans = dfs(N);
	cout << ans << endl;
	return (0);
}
