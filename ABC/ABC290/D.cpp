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
	int T;
	cin >> T;
	rep(i, 0, T)
	{
		ll N, D, K;
		cin >> N >> D >> K;
		ll ans = 0;
		if (D%N == 0)
			ans = (D%N * (K - 1)%N)%N + (K-1)%N;
		else if (my_gcd(N,D) != 1)
			ans = (D%N * (K - 1)%N)%N + ((K-1)/(N/min(D%N, N - D%N)))%N;
		else
			ans = (D%N * (K - 1)%N)%N;
		cout << ans%N << endl;
		
	}
	return(0);
}
