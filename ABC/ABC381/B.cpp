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
	vector<int> cnt(27,0);
	int ok =1;
	if(S.size()%2!=0)
		ok*=0;
	rep(i,0,S.size())
		if(i%2==0)
			if(S[i]!=S[i+1])
				ok*=0;
	// cout <<ok;
	rep(i,0,S.size())
		cnt[S[i]-'a']+=1;
	rep(i,0,27)
		if(cnt[i]!=2&&cnt[i]!=0)
			ok*=0;
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
	return (0);
}