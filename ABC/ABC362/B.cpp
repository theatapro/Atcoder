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
	ll xa,ya,xb,yb,xc,yc;
	cin >>xa>>ya>>xb>>yb>>xc>>yc;
	ll AB_2 = abs(xa-xb)*abs(xa-xb)+abs(ya-yb)*abs(ya-yb);
	ll BC_2 = abs(xc-xb)*abs(xc-xb)+abs(yc-yb)*abs(yc-yb);
	ll CA_2 = abs(xa-xc)*abs(xa-xc)+abs(ya-yc)*abs(ya-yc);
	if(AB_2+BC_2==CA_2 || CA_2+BC_2==AB_2 || AB_2+CA_2==BC_2)
	{
		cout << "Yes" << endl;
		return (0);
	}
	else{
		cout << "No" << endl;
		return (0);
	}
	return (0);
}