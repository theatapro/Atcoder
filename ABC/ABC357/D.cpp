#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }


typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using namespace atcoder;

using P = pair<ll, ll>;
using mint = modint998244353;

ll keta(ll x)
{
	int ret=0;
	while(x>0)
	{
		x/=10;
		ret++;
	}
	return(ret);
}
int main(void)
{
	ll N;
	cin >> N;
	mint Y = N;
	mint K = mint(10).pow(keta(N));
	Y = mint(K).pow(N);
	mint Z = N*(Y-1);
	mint ans = Z*((K-1).inv());
	cout << ans.val() << endl;
	// cout << 5*((ll)pow(10,5)-1)/9<<endl;
	return(0);
}