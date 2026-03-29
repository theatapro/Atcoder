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
const int DIV = 1e8;

using namespace std;
using P = pair<ll, ll>;

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

int	main(void)
{	
	ll N;
	cin >> N;
	ll ans = 0;
	rep(i,1,33)
	{
		if(pwd(2,i)> N)
		{
			break;
		}
		ll ng = INF/sqrt(pwd(2,i));
		ll ok = 1;
		ll mid = 1;
		while(abs(ok-ng)>1)
		{
			mid = (ok+ng)/2;
			if(pwd(2,i)*pwd(mid,2)>N)
			{
				ng = mid;
			}
			else
			{
				ok = mid;
			}
		}
		ll rest = ok/2;
		ans+=ok-rest;

}
	cout << ans << endl;
	return(0);
}