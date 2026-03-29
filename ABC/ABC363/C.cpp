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

bool is_palindrome(string S,int K)
{
	int ret;
	rep(i,0,S.size()-K+1)
	{
		string sub = S.substr(i,K);
		string sub_rev = sub;
		reverse(sub.begin(),sub.end());
		if(sub==sub_rev)
			return(true);
	}
	return(false);
}

int	main(void)
{	
	int N,K;
	string S;
	cin >> N >> K >> S;
	ll ans=0;
	string next_S = S;
	ll num = 0;
	while(1)
	{
		num ++;
		if(is_palindrome(S,K))
			ans++;
		next_permutation(S.begin(), S.end());
		if(S==next_S)
			break;
	}
	cout << num -ans<<endl;
	// cout << ans <<endl;
	return(0);
}