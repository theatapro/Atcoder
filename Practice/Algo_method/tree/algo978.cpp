#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<vector<int> > G(N);
	vector<vector<int> > LEVEL(N);

	rep(i, 0, N - 1)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	vector<int> dist(N, -1);
	vector<int> what_from(N, -1);
	queue<int> que;
	int max_depth = 0;
	int edge_A;

	dist[0] = 0;
	que.push(0);
	LEVEL[0].push_back(0);

	while(!que.empty())
	{
		int v = que.front();
		que.pop();
		for(auto nv: G[v])
		{
			if(dist[nv] == -1)
			{
				dist[nv] = dist[v] + 1;
				what_from[nv] = v;
				LEVEL[dist[nv]].push_back(nv);
				max_depth = max(dist[nv], max_depth);
				que.push(nv);
			}
		}
	}
	int search_level = max_depth;
	int ans = 0;
	set<int> from;

	while(search_level >= 0)
	{
		for(auto i : LEVEL[search_level])
			if(!from.count(i))
			{
				ans++;
				from.insert(what_from[i]);
			}
		search_level--;
	}
	cout << ans << endl;

	return(0);
}