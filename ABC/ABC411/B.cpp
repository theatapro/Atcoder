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
	ll N;
	cin >> N;
	vector<ll> D(N-1);
	vector<ll> sum(N-1);

	rep(i,0,N-1)
	{
		cin >> D[i];
		if(i!=0)
		{
			sum[i]=sum[i-1]+D[i];
		}
		else
		{
			sum[i]=D[i];
		}
	}

	rep(i,0,N-1)
	{
		rep(j,i,N-1)
		{
			cout << sum[j] << " ";
		}
		rep(k,i+1,N-1)
		{
			sum[k]=sum[k]-sum[i];
		}
		cout << endl;
	}
	return (0);
}