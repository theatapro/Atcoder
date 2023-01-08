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
				que.push(nv);
			}
		}
	}

	int max_depth = 0;
	rep(i, 0, N)
	{
		int depth = dist[i];
		max_depth = max(depth, max_depth);
	}

	cout << max_depth <<endl;
	return(0);
}