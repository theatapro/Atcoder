#include <bits/stdc++.h>
// #include <atcoder/all>
// using namespace atcoder;
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const double pi = 3.141592653589793;
using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	double D;
	cin >> D;
	double ans = pi*((double)(D/2))*((double)(D/2));
	cout << std::setprecision(10)<<double(ans) <<endl;
	return(0);
}