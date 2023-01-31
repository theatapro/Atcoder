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
    string X;
    cin >> X;
	int N = X.size();
	vector<char> vec(N + 1);
	vector<bool> dp(N + 1);
	dp[0] = true;

    rep(i, 1, N+1)
		vec[i] = X[i-1];

	rep(i, 1, N + 1)
	{
		if(vec[i] == 'h')
		{
			if(i == 1)
				dp[i] = false;
			else if(dp[i - 2] && vec[i - 1] == 'c')
				dp[i] = true;
			else
				dp[i] = false;
		}
		else
		{
			if(vec[i] == 'o' ||vec[i] == 'k' ||vec[i] == 'u' )
				dp[i] = dp[i-1];
			else
				dp[i] = false;
		}
	}
	if(dp[N])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}