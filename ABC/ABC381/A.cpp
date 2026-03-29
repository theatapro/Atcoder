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
	int N;
	string S;
	cin >> N >> S;
	int T = S.size();
	int X = (T+1)/2;
	int ok = 1;
	if(N%2==0)
		ok*=0;
	rep(i,0,X-2)
		if(S[i]!='1')
			ok *=0;
	if(S[X-1]!='/')
		ok *=0;
	rep(i,X,T)
		if(S[i]!='2')
			ok *=0;
	if(ok)
	{
		cout << "Yes" << endl;
		return (0);
	}
	else
	{
		cout << "No" << endl;
		return (0);
	}
	return(0);
}