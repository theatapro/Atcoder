#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;
using P = pair<int, int>;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> dp(N, 10e8);
	vector<vector<P> > G(N);

	rep(i, 0, M);
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		G[from].push_back(make_pair(to, cost));
	}
	
	dp[0] = 0;
	rep(i, 0, N)
		for(auto p: G[i])
			dp[p.first] = min(dp[i] + p.second, dp[p.first]);
	if(dp[N - 1] == 10e8)
		cout << -1 << endl;
	else
		cout << dp[N - 1] << endl;

	return(0);
}