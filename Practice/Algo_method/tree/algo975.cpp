#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<vector<int> > G(N);

	rep(i, 0, N - 1)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	vector<int> dist(N, -1);
	queue<int> que;
	int max_depth = 0;
	int deep_v;

	dist[0] = 0;
	que.push(0);

	while(!que.empty())
	{
		int v = que.front();
		que.pop();
		for(auto nv: G[v])
		{
			if(dist[nv] == -1)
			{
				dist[nv] = dist[v] + 1;
				max_depth = max(dist[nv], max_depth);
				if(max_depth == dist[nv])
					deep_v = nv;
				que.push(nv);
			}
		}
	}

	max_depth = 0;
	vector<int> n_dist(N, -1);
	queue<int> n_que;

	n_dist[deep_v] = 0;
	n_que.push(deep_v);

	while(!n_que.empty())
	{
		int v = n_que.front();
		n_que.pop();
		for(auto nv: G[v])
		{
			if(n_dist[nv] == -1)
			{
				n_dist[nv] = n_dist[v] + 1;
				max_depth = max(n_dist[nv], max_depth);
				n_que.push(nv);
			}
		}
	}

	cout << max_depth << endl;

	return(0);
}