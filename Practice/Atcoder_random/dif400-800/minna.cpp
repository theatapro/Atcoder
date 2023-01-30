#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

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
	ll K, A, B;
	
    cin >> K >> A >> B;
	K++;
	if(A + 2 >= B)
	{
		cout << K << endl;
		return(0);
	}
	else
	{
		ll cycle = K / (A + 2);
		ll ans = cycle * B + K % (A + 2);
		cout << ans << endl;
		return(0);
	}
	return(0);
	

}