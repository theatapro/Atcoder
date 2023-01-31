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
	vector<int> time_vec(N + 1);
	int sum = 0;

	rep(i, 1, N + 1)
	{
		cin >> time_vec[i];
		sum += time_vec[i];
	}

	vector<vector<bool> > dp(N + 1, vector<bool>(sum + 1));
	rep(i, 0, N + 1)
		dp[i][0] = true;
	rep(i, 1, N + 1)
		rep(j, 1, sum + 1)
		{
			if (j < time_vec[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j - time_vec[i]] || dp[i - 1][j];
		}
	rep(i, sum / 2, sum + 1)
		if (dp[N][i])
		{
			cout << max(i, sum - i) << endl;
			return (0);
		}
	return (0);

}