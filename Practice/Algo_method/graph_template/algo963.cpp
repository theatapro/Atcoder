#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;

void dfs(int n, vector<vector<int> > &G, vector<bool> &seen, vector<int> &ans)
{
	seen[n] = true;
	for(auto nv:G[n])
	{
		if(!seen[nv])
			dfs(nv, G, seen, ans);
	}
	ans.push_back(n);
	return;
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
	vector<bool> seen(N);
	vector<int> ans;

	rep(i, 0, M)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
	}

	rep(i, 0, N)
		sort(G[i].begin(), G[i].end());

	rep(i, 0, N)
		if(!seen[i])
			dfs(i, G, seen, ans);
	
	reverse(ans.begin(), ans.end());

	rep(i, 0, ans.size())
		cout << ans[i] << " ";
	return(0);
}