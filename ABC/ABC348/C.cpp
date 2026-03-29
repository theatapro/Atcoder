#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	int N;
	cin >> N;
	map<ll,ll> min_map;
	set<int> colset;
	rep(i,0,N)
	{
		ll val,color;
		cin >> val >>color;
		if(min_map.count(color))
		{
			if(min_map[color]>val)
				min_map[color]=val;
		}
		else
			min_map[color]=val;
		colset.insert(color);
	}
	int max_val=0;
	ll ans = -1;
	for(auto [c,val] : min_map)
	{
		// ll now_val = c.second;
		// if(max_val<c.second)
		// {
			// max_val = c.second;
			ans = max(ans,val);
		// }
	}
	cout << ans;
	return (0);
}