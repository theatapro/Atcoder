#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;

void dfs(vector<vector<int> > &G, vector<bool> &seen, vector<bool> &color, int v)
{
	for(auto nv : G[v])
	{
		if(!seen[nv])
		{
			seen[nv] = true;
			color[nv] = !color[v];
			dfs(G, seen, color, nv);
		}
	}
	return;
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
	vector<bool> seen(N, false);
	vector<bool> color(N, false);

	rep(i, 0, M)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	rep(i, 0, N)
	{
		if(!seen[i])
		{
			color[i] = true;
			seen[i] = true;
			dfs(G, seen, color, i);
		}
	}

	rep(i, 0, N)
		for(auto v : G[i])
			if(color[i] == color[v])
			{
				cout << "No" << endl;
				return(0);
			}

	cout << "Yes" << endl;
	// while(!que.empty())
	// {
	// 	int v = que.front();
	// 	que.pop();
	// 	for(auto nv: G[v])
	// 	{
	// 		if(!seen[nv])
	// 		{
	// 			seen[nv] = true;
	// 			que.push(nv);
	// 			prev[nv] = v;
	// 		}
	// 	}
	// }


	return(0);
}