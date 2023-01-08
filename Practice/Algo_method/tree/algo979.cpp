#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;
using P = pair<int, int>;

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
	vector<vector<P> > segment(N);
	queue<int> que;
	int max_depth = 0;

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
				segment[dist[nv]].push_back(make_pair(v, nv));
				max_depth = max(dist[nv], max_depth);
				que.push(nv);
			}
		}
	}

	int search_level = max_depth;
	int ans = 0;
	set<P> ban;

	while(search_level >= 1)
	{
		for(auto p : segment[search_level])
		{
			if(!ban.count(p))
			{
				ans++;
				for(auto pp : segment[search_level])
					if(p.first == pp.first)
						ban.insert(pp);
				for(auto pp : segment[search_level - 1])
					if(p.first == pp.second)
						ban.insert(pp);
			}
		}
		search_level--;
	}
	cout << ans << endl;

	return(0);
}