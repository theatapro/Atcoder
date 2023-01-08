#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	ll	N, M;
	cin >> N >> M;
	ll multi = 1;
	ll key = 0;
	ll dig = 0;
	ll X = 1;

	rep(i, 0, 18)
	{
		int flag = 0;
		rep(multi, 1, 10)
		{
			if((X * multi) % M == 0)
			{
				key = multi * X;
				flag = 1;
			}
		}
		if(flag)
		{
			dig = i + 1;
			break;
		}
		X = X * 10 + 1;
	}
	if(key == 0)
	{
		cout << -1 << endl;
		return(0);
	}
	rep(i, 0, N / dig)
		cout << key;

	cout << endl;
}