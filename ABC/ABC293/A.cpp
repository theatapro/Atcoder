#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{
	string S;
	cin >> S;
	string ans;
	ans = S;
	rep(i,0,S.size()/2)
	{
		swap(ans[2*i],ans[2*i+1]);

	}

	cout << ans << endl;

}