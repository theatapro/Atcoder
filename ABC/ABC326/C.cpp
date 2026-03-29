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

int main(void)
{
	ll N,M;
	cin >> N >> M;
	// map<ll,ll> sum;
	// map<ll,ll> inf;
	vector<ll> list;
	rep(i,0,N)
	{
		ll A;
		cin >> A;
		list.push_back(A);
	}
	sort(list.begin(),list.end());
	ll ans = 0;
	rep(i,0,N)
	{
		ll start = list[i];
		auto b = upper_bound(list.begin(),list.end(),start+M-1);
		ll x = (ll)(b - list.begin());
		ans = max(ans,x-i);
	}
	cout << ans <<endl;
	return(0);
}
