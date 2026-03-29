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

int count(string s,string T)
{
	int ret = 0;
	rep(i,0,s.size()){
		while(s[i]!=T[i]){
			if(T[i]=='9') T[i]='0';
			else T[i]++;
			ret++;
		}
	}
	return(ret);
}
int	main(void)
{	
	int N,M;
	string S,T;
	int ans = INF;
	cin >> N >> M >> S >>T;

	rep(i,0,N - M +1){
		int now = 0;
		rep(j,0,M){
			int x = S[i+j] - '0';
			int y = T[j] - '0';
			now+=((x+10) - y)%10;
		}
		ans = min(ans,now);
	}
	cout << ans <<endl;
	return (0);
}