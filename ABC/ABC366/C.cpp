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
	map<ll,ll> cnt;
	set<ll> se;

	int Q;
	cin>>Q;
	rep(i,0,Q)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			int x_1;
			cin >>x_1;
			se.insert(x_1);
			cnt[x_1]++;
		}
		else if(a==2)
		{
			int x_2;
			cin >>x_2;
			cnt[x_2]--;
			if(cnt[x_2]==0)
			{
				se.erase(x_2);
				cnt.erase(x_2);
			}
		}
		else
		{
			cout <<se.size()<<endl;
		}
	}

	return(0);
}