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

using namespace std;
using P = pair<int, int>;

int cnt(string a, char c)
{
	int cnt = 0;
	rep(i,0,a.size())
		if(a[i]==c)
			cnt++;
	return(cnt);
}
int	main(void)
{	
	string A;
	cin >> A;
	if(cnt(A,'3')==3 &&cnt(A,'2')==2&&cnt(A,'1')==1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return(0);
}