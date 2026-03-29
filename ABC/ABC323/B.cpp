#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{
	int N,W;
	cin >> N >> W;
	vector<P> list(N);
	vector<vector<ll>> dp(N+10,vector<ll>(W+10));
	rep(i,0,N)
		cin >> list[i].first >> list[i].second;
	dp[0][0] = 0;
	rep(i,0,N)
	{
		rep(j,0,W+1)
		{
			if(list[i].first <= j)
				chmax(dp[i+1][j],dp[i][j-list[i].first]+list[i].second);
			chmax(dp[i+1][j], dp[i][j]);
		}
	}
	cout << dp[N][W] <<endl;
	return(0);
}