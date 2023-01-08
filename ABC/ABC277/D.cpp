#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	ll N, M;
	cin >> N >> M;
	ll ans = 0;
	map<ll,ll> sett;
	rep(i, 0, N)
	{
		ll num;
		cin >> num;
		ans += num;
		if(!sett.count(num))
		{
			sett[num] = 1;
		}
		else
			sett[num]++;
	}
	ll max_sum=0;
	rep(i,0,M)
	{
		
	}

	cout >> ans - maxsum;
}