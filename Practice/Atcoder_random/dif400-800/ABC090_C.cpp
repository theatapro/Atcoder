#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)

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

int main()
{
	ll N, M;
	cin >> N >> M;

	if (N == 1 && M == 1)
	{
		cout << 1 << endl;
		return (0);
	}
	else if(N == 1 || M == 1)
	{
		if (N == 1)
			cout << M - 2 << endl;
		else
			cout << N - 2 << endl;
		return (0);
	}
	else
		cout << (N - 2)*(M - 2) << endl;
	return (0);
	
}