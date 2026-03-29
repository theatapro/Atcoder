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
	int group,capa;
	cin >> group >> capa;
	vector<int> group_nin(group);
	rep(i,0,group)
		cin >> group_nin[i];
	int ans = 0;
	int index = 0;
	int now = 0;
	while(1)
	{
		now+=group_nin[index];
		if(now>capa)
		{
			ans++;
			now = 0;
			continue;
		}
		else{
			index++;
			if(index>group-1)
				break;
		}
	}
	cout << ans+1;

	
		
	return (0);
}