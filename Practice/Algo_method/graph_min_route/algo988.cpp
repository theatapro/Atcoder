#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;
using P = pair<int, int>;

struct edge {
	int from;
	int to;
	int leng;
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> dist(N, 1e9);
	vector<vector<int> > info(M);

	dist[0] = 0;
	rep(i, 0, M)
	{
		int u, v, w;
		cin >> u >> v >> w;
		info[i].push_back(u);
		info[i].push_back(v);
		info[i].push_back(w);
	}

	int ans = 0;
	int change = 0;

	while(change != M)
	{
		int change = 0;
		rep(i, 0, M)
		{
			int u = info[i][0];
			int v = info[i][1];
			int w = info[i][2];
			// auto [u, v, w] = info[i];
			int pre_dist = dist[v];
			dist[v] = min(dist[v], dist[u] + w);
			if(pre_dist == dist[v])
				change++;
		}
		ans ++;
	}

	cout << ans << endl;

	return(0);
}