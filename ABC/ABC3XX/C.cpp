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


int	main(void)
{	
	vector<P> oneset;
	int N,K;
	string S;
	cin >> N >> K >> S;
	int now_one = false;
	int fi = 0;
	int se = 0;

	rep(i,0,N)
	{
		if(S[i]=='1' && !now_one)
		{
			fi = i;
			now_one = true;
			if(i==S.size()-1)
				oneset.push_back(make_pair(fi,fi+1));
		}
		else if(now_one && i == S.size()-1)
		{
			oneset.push_back(make_pair(fi,i+1));
		}
		else if((now_one && S[i]=='0'))
		{
			se = i;
			oneset.push_back(make_pair(fi,se));
			fi = 0;
			se = 0;
			now_one = false;
		}
	}

	// for(auto p:oneset)
	// {
	// 	cout << p.first << " " << p.second <<endl;
	// }

	int len = oneset[K-1].second - oneset[K-1].first;
	int st = oneset[K-2].second;
	// cout << len << " " <<st<<endl;
	rep(i,oneset[K-1].first-1,oneset[K-1].first+len+1)
		S[i] = '0';
	rep(i,st,st+len)
		S[i] = '1';
	cout << S <<endl;
	return(0);
}