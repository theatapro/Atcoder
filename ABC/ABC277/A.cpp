#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	int N, X;
	cin >> N >> X;
	vector<int> list(N);
	int ans;

	rep(i,0,N)
	{
		cin >> list[i];
	}
	rep(i, 0, N)
	{	
		if(list.at(i) == X)
			ans = i+1;
	}
	cout << ans << endl;
}