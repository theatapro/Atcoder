#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
#define MOD 9e+7;
using namespace std;

int	main(void)
{
	int D;
	string N;
	cin >> D >> N;

	vector<int>	num;
	int num_size = N.size();
	rep(i, 0, num_size)
		num.push_back(N[i] - '0');

	vector<vector<vector<int> > > dp(10000,vector<vector<int> >(2, vector<int>(2)));
	dp[0][0][0] = 1;

	rep(i, 0, num_size)
		rep(smaller, 0, 2)
			rep(j, 0, 2)
				for(int x = 0; x <= (smaller ? 9 : num[i]); x++)
				{
					dp[i + 1][smaller || (x < num[i])][j || (x == 3)] += dp[i][smaller][j];
				}

	cout << dp[num_size][0][1] + dp[num_size][1][1] << endl;
}