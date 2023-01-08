#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	int H,W;
	int ans = 0;
	cin >> H >>W;
	rep(i,0,H*W)
	{
		char c;
		cin >> c;
		if(c == '#')
			ans++;
	}
	cout << ans << endl;
}