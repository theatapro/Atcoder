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
using P = pair<int, int>;

int	main(void)
{	
	int A = 0;
	int B = 0;
	rep(i,0,9)
	{
		int a;
		cin >> a;
		A+=a;
	}
	rep(i,0,8)
	{
		int b;
		cin >> b;
		B+=b;
	}
	cout << A-B+1 << endl;
	return (0);
}