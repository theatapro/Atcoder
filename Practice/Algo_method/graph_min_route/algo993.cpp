#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

using P = pair<int, int>;
const int INF = 1e9;


struct edge {
	int from;
	int to;
	int leng;
};

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<P> > info(N);

	vector<int> dist(N, INF);
	dist[0] = 0;

	vector<bool> flag(N);

	priority_queue<P, vector<P>, greater<P> > pq;

	rep(i, 0, M)
	{
		int u, v, w;
		cin >> u >> v >> w;
		info[u].push_back(make_pair(v, w));
	}

	pq.push(make_pair(0, 0));

	while(!pq.empty())
	{
		int min_u = pq.top().second;
		pq.pop();
		if(!flag[min_u])
		{
			for(auto p: info[min_u])
			{
				int v = p.first;
				int w = p.second;
				dist[v] = min(dist[v], dist[min_u] + w);
				pq.push(make_pair(dist[v], v));
			}
			flag[min_u] = true;
		}
	}

	rep(i, 0, N)
		cout << dist[i] << endl;

	return(0);
}