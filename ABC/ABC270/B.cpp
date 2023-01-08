#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	int X, Y, Z;
	cin >> X >> Y >> Z;

	if(Y > 0)
	{
		if(Z > Y && X > Y)
		{
			cout << -1 << endl;
			return(0);
		}
		if(X < Y)
		{
			cout << abs(X) << endl;
			return(0);
		}
		else
		{
			cout << abs(Z) + abs(X - Z) << endl;
			return(0);
		}
	}
	else
	{
		if(Z < Y && X < Y)
		{
			cout << -1 << endl;
			return(0);
		}
		if(X > Y)
		{
			cout << abs(X) << endl;
			return(0);
		}
		else
		{
			cout << abs(Z) + abs(X - Z) << endl;
			return(0);
		}
	}
}