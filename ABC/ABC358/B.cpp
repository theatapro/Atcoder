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
	ll N,A;
	cin >> N >> A;
	vector<ll> T(N);
	vector<ll> res(N);
	rep(i,0,N)
		cin >> T[i];
	res[0]=T[0]+A;
	rep(i,1,N)
	{
		// ll ans = 0;
		if(T[i]-T[i-1]>=A)
		{
			res[i]=T[i]+A;
			// cout << ans << endl;
		}else{
			res[i]=res[i-1]+A;
		}
	}
	rep(i,0,N)
		cout << res[i] <<endl;

	return (0);
}