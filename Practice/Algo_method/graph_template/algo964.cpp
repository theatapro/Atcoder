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
	vector<int> deg(N);
	vector<int> ans;

	rep(i, 0, M)
	{
		int a, b;
		cin >> a >> b;
		deg[a]++;
		G[b].push_back(a);
	}

	rep(i, 0, N)
		sort(G[i].begin(), G[i].end());
	
	queue<int> que;

	rep(i, 0, N)
		if(deg[i] == 0)
			que.push(i);
	
	while(!que.empty())
	{
		int v = que.front();
		ans.push_back(v);
		que.pop();
		for(auto nv: G[v])
		{
			deg[nv]--;
			if(deg[nv] == 0)
				que.push(nv);
		}
	}
	
	reverse(ans.begin(), ans.end());

	rep(i, 0, ans.size())
		cout << ans[i] << " ";
	return(0);
}