#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

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
	int T;
	cin >> T;
	rep(i, 0, T)
	{
		ll p, q, pc;
		ll x;
		cin >> x;
		pc = prime(x);
		if(x/pc % pc == 0)
			p = pc;
		else
			p = sqrt(x/pc);
		q = x / (p*p);
		cout << p << " "<< q << endl;
	}

	return(0);
}
