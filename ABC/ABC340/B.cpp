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

ll ret(ll A)
{
	ll ret = 1;
	rep(i,0,A)
		ret*=A;
	return(ret);

}
int	main(void)
{
	int Q;
	cin >> Q;
	vector<ll> num;
	rep(i,0,Q)
	{
		int A;
		cin >> A;
		if(A==1)
		{
			ll x;
			cin >> x;
			num.push_back(x);
		}
		if(A==2)
		{
			int k;
			cin >> k;
			
			int size = num.size();
			cout << num[size-k] << endl;
		}
	}
	return(0);
}