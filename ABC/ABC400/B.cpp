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

ll pwd(ll a, ll b)
{
	ll ans = 1;
	while(b>0)
	{
		ans *= a;
		b--;
	}
	return ans;
}

ll sum_sigma(ll n, ll m)
{
	ll ans = 0;
	for(int i=0; i<=m; i++)
	{
		ans += pwd(n,i);
		if(ans>INF)
		{
			return(-1);
		}
	}
	return ans;
}

int	main(void)
{	
	ll N,M;
	cin >> N >> M;
	ll ans = sum_sigma(N,M);
	if(ans==-1)
	{
		cout << "inf" << endl;
	}
	else
	{
		cout << ans << endl;
	}
	return (0);
}