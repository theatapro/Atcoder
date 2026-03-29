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
	string S;
	cin >> S;
	int syou=0;
	if(S.size()==1)
	{
		cout << S <<endl;
		return(0);
	}
	rep(i,0,S.size())
	{
		if(S[i]<='z'&&S[i]>='a')
			syou++;
	}
	string ans = S;
	if(syou>S.size()/2)
	{
		rep(i,0,S.size())
			if(ans[i]<='Z'&&ans[i]>='A')
				ans[i]+='z'-'Z';
	}
	else
	{
		rep(i,0,S.size())
			if(ans[i]<='z'&&ans[i]>='a')
				ans[i]+='Z'-'z';
	}
	cout << ans << endl;

	return (0);
}