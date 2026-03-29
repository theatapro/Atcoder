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
	int N,D;
	cin >> N >> D;
	vector<P> snake(N);
	rep(i,0,N)
		cin >> snake[i].first >> snake[i].second;
	rep(k,1,D+1)
	{
		int ans = 0;
		rep(i,0,N)
		{
			int now = snake[i].first*(snake[i].second+k);
			chmax(ans,now);
		}
		cout << ans << endl;
	}
	return (0);
}