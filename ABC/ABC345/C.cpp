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
	map<char,int> char_map;
	rep(i,0,S.size())
		char_map[S[i]]++;
	vector<int> exclude_sum(26);
	rep(i,'a','z'+1)
		rep(j,'a','z'+1)
			if(i!=j)
				exclude_sum[i-'a']+=char_map[j];
	ll ans = 0;
rep(i,0,S.size())
		ans += exclude_sum[S[i]-'a'];
	ans/=2;
	// cout << ans;
	rep(i,0,S.size())
		if(char_map[S[i]]>=2)
		{
			ans+=1;
			break;
		}
	cout << ans << endl;
	return (0);
}