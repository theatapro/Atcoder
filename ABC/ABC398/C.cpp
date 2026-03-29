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
	int N;
	cin >> N;
	vector<ll> num(N);
	multiset<ll> ms;
	ll ans = -10;
	set<ll> se;
	rep(i,0,N)
	{
		cin >> num[i];
		ms.insert(num[i]);
	}
	for(auto n :num)
	{
		if(se.count(n))
			continue;
		if(ms.count(n)==1)
			ans = max(ans,n);
		if(ms.count(n)>1)
			se.insert(n);
	}

	if(ans==-10)
		cout << -1 <<endl;
	else
	{
		rep(i,0,N)
		{
			if(num[i]==ans)
			{
				cout << i+1 <<endl;
				return(0);
			}
		}
	}
	return(0);
}