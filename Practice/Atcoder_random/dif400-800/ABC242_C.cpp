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
	const ll MOD = 998244353;
    ll N;
    cin >> N;
	vector<vector<ll> > dp(N + 1, vector<ll> (10));

	rep(i, 1, 10)
		dp[1][i] = 1;
	rep(i, 2, N + 1)
    	rep(j, 1, 10)
	{
		if (j == 1)
			dp[i][j] = (dp[i - 1][j] + dp[i - 1][j + 1]) % MOD;
		else if (j == 9)
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
		else
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % MOD;
	}
	ll ans = 0;
	rep(i, 1, 10)
		ans += dp[N][i] % MOD;
	cout << ans % MOD << endl;
	
}