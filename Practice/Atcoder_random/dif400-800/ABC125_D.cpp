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
    int N;
    cin >> N;
	vector<ll> vec(N);
	ll mini = LINF;
	ll minus_cnt = 0;
	ll sum = 0;

    rep(i, 0, N)
	{
		ll A;
		cin >> A;
		vec[i] = A;
		mini = min(mini, abs(A));
		sum += abs(A);
		if(A < 0)
			minus_cnt++;
	}
	if (minus_cnt % 2 == 0)
	{
		cout << sum << endl;
		return(0);
	}
	else
	{
		sum -= 2 * mini;
		cout << sum << endl;
		return(0);

	}
	return (0);
}