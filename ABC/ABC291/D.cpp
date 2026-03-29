#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int	main(void)
{
	int N;
	cin >> N;
	vector<vector<int> > dp(N + 1, vector<int>(1));
	vector<int> A(N + 1);
	vector<int> B(N + 1);
	const int MOD = 998244353;
	dp[0][0] = 1;
	A[0] = -1;
	B[0] = -1;
	rep(i, 0, N)
	{
		cin >> A[i+1] >> B[i+1];	
	}
	rep(i, 1, N + 1)
	{
		if (i == 1)
		{
			dp[i][0] = 1;
			dp[i][1] = 1;
			continue;
		}
		if (A[i] == A[i - 1] && A[i] == B[i - 1])
			dp[i][0] = 0;
		else if (A[i] == A[i - 1])
			dp[i][0] = dp[i - 1][1];
		else if (A[i] == B[i - 1])
			dp[i][0] = dp[i - 1][0];
		else
		{
			// cout << "****" << endl;
			dp[i][0] = (dp[i - 1][0] + dp[i - 1][1])%MOD;
		}
		// cout << "dp" << i << "0; " << dp[i][0] << endl;

		if (B[i] == B[i - 1] && B[i] == A[i - 1])
			dp[i][1] = 0;
		else if (B[i] == B[i - 1])
			dp[i][1] = dp[i - 1][0];
		else if (B[i] == A[i - 1])
			dp[i][1] = dp[i - 1][1];
		else
			dp[i][1] = (dp[i - 1][0] + dp[i - 1][1])%MOD;
		
		if (dp[i][0] + dp[i][1] == 0)
		{
			cout << 0 << endl;
			return(0);
		}
		// cout << "dp" << i << "1; " << dp[i][1] << endl;

	}

	cout << (dp[N][0] + dp[N][1])%MOD << endl;
	return(0);
}
