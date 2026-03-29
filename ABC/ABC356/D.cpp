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
using P = pair<ll, ll>;

int main(void)
{
	ll N,M;
	cin >> N >> M;
	set<ll> se;
	for(ll i=0;i<61;i++)
		if(M &((ll)1<<i))
			se.insert(i);
	ll ans=0;
	N++;
	for(auto e :se)
	{
		// cout << e << endl;
		ll a = (ll)pow(2,e+1);
		ll x = N/a;
		ans += x*(a/2);
		ans %= 998244353;

		ll r = N%a;
		if(r>(a/2))
			ans += r - (a/2);
		ans %= 998244353;
	}
	cout << ans <<endl;
	return(0);
}