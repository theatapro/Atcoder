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
	ll B;
	cin >> B;
	rep(i,1,16)
	{
		if(ret(i)==B)
		{
			cout << i << endl;
			return(0);
		}
	}
	cout << -1 << endl;
	return(0);
}