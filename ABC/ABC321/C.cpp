#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

bool is_321(ll num)
{
	string S = to_string(num);
	bool ans = true;
	rep(i,0,S.size()-1)
		if(S[i]<=S[i+1])
			ans = false;
	return(ans);
}
int main(void)
{
	// cout << (1<<0) << endl;
	// cout << (1<<1) << endl;

	ll K;
	cin >> K;
	vector<ll> list;
	//1,111,111,111
	//0000000100
	rep(i,0,1<<10)
	{
		ll cand=0;
		ll order = 1;
		rep(a,0,10)
		{
			if((1<<a) & i)
			{
				cand += a*order;
				order *= 10;
			}
		}
		if(cand==0)
			continue;
		else
			list.push_back(cand);
	}
	sort(list.begin(),list.end());
	cout << list[K-1] << endl;

	return(0);
}
