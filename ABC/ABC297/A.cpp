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
	int N,D;
	cin >> N >>D;
	int re = -INF-1;
	rep(i,0,N)
	{
		int now;
		cin >> now;
		if(now - re <= D)
		{
			cout << now << endl;
			return(0);
		}
		re = now;
	}

	cout << -1 << endl;

}