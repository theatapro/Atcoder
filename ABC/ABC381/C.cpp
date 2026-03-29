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
const int DIV = 1e8;


using namespace std;
using P = pair<ll, ll>;


int check(string S,int i)
{
	int ret = 3;
	int len = S.size();
	rep(k,2,len)
	{
		//hamidashi
		if(i-k<0 || i+k>=len)
			break;
		if(S[i-k]!='1' || S[i+k]!='2')
			break;
		else{
			if(S[i-k]=='1'&&S[i+k]=='2')
				ret+=2;
		}
	}
	return(ret);
}

int	main(void)
{	
	vector<int> slash;
	int N;
	string S;
	cin >> N >> S;
	int ans = 1;
	rep(i,1,N-1)
	{
		if(S[i-1]=='1' && S[i]=='/' &&S[i+1]=='2')
			ans = max(check(S,i),ans);
	}

	cout << ans;
	return(0);
}