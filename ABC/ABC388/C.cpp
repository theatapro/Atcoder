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


int	main(void)
{	
	int N;
	cin >> N;
	vector<int> mochi(N);
	rep(i,0,N)
		cin >> mochi[i];
	ll ans = 0;
	rep(i,0,N)
	{
		int enable_size = mochi[i]*2;
		auto Iter = lower_bound(all(mochi),enable_size);
		int enable_cnt = N - (Iter-mochi.begin());
		// cout << enable_cnt << endl;
		ans+=enable_cnt;
	}

	cout << ans;
	return(0);
}