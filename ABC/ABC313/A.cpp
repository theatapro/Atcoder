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
	ll N;
	cin >> N;
	vector<ll> point(N);

	ll now_max = 0;
	rep(i,0,N)
	{
		cin >> point[i];
		now_max=max(now_max,point[i]);
	}
	rep(i,1,N)
	{
		if(point[0]<=point[i])
		{
			cout << now_max - point[0] + 1 << endl;
			return(0);
		}
	}
	cout << 0 << endl;

	
	return(0);
}