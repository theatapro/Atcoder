#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	string S;
	int ans = -1;
	cin >> S;
	rep(i, 0, S.size())
	{	
		if(S.at(i) == 'a')
			ans = i+1;
	}
	cout << ans << endl;
}