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

bool judge(string S)
{
	if(S[0]!='<')
		return(false);
	if(S[S.size()-1]!='>')
		return(false);
	rep(i,1,S.size()-1)
		if(S[i]!='=')
			return(false);
	return(true);
}

int	main(void)
{	
	string S;
	cin >> S;

	if(judge(S))
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