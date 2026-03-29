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

int	main(void)
{	
	int N;
	cin >> N;
	vector<P> AB(N);
	ll sum_A = 0;
	rep(i,0,N)
	{
		ll A,B;
		cin >> A >>B;
		AB[i].first = A;
		AB[i].second = B;
		sum_A += A;
	}
	ll ans = 0;
	rep(i,0,N)
	{
		ll A_height = sum_A - AB[i].first;
		ll B_height = AB[i].second;
		ans = max(ans,A_height+B_height);
	}
	cout << ans << endl;
	return(0);
}