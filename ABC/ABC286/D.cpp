#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

ll my_gcd(ll x, ll y)
{
    if(x % y == 0)
        return y;
    else
        return my_gcd(y, x % y);
}

ll my_lcm(ll x, ll y)
{
    return(x * y / my_gcd(x, y));
}

ll prime(ll x)
{
	rep(i, 2, 1e7)
	{
		if(x % i == 0)
			return(i);
	}
	return(1);
}

int	main(void)
{
	int N, X;
	cin >> N >> X;
	vector<P> vec(N);
	vector<vector<bool> > can(55,vector<bool>(10010));

	rep(i, 0, N)
		cin >> vec[i].first >> vec[i].second;
	can[0][0] = true;
	rep(i, 0, vec[0].second + 1)
		can[1][vec[0].first * i] = true;
	
	rep(i, 2, N + 1)
	{
		rep(j, 0, 10001)
		{
			rep(k, 0, vec[i - 1].second + 1)
			{
				if (j >= vec[i - 1].first * k)
				{
					can[i][j] = can[i - 1][j - vec[i - 1].first * k];
					if (can[i][j] == true)
						break ;
				}
			}
		}
	}
	if (can[N][X])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return(0);
}
