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
	int N;
	cin >> N;
	vector<int> A_vec(N);
	rep(i, 0, N)
		cin >> A_vec[i];
	int M;
	cin >> M;
	set<int> B_set;
	rep(i, 0, M)
	{
		int B_i;
		cin >> B_i;
		B_set.insert(B_i);
	}

	int X;
	cin >> X;
	
	vector<bool> dp(X + 10001);
	dp[0] = true;
	rep(i, 1, X + 10)
	{
		for(auto A_i : A_vec)
		{
			if(i - A_i < 0)
				continue;
			dp[i] = dp[i - A_i];
			if (dp[i])
				break;
		}
		if(B_set.count(i))
			dp[i] = false;
	}
	if(dp[X])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return(0);
}
