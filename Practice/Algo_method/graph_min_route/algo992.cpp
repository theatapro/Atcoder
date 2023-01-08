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
	vector<edge> info(M);

	vector<vector<int> > dist(N + 1, vector<int>(N, INF));
	dist[0][0] = 0;

	vector<int> pre(N, -1);

	rep(i, 0, M)
		cin >> info[i].from >> info[i].to >> info[i].leng;
	
	rep(i, 1, N + 1)
	{
		dist[i] = dist[i-1];
		rep(j, 0, M)
		{
			int u = info[j].from;
			int v = info[j].to;
			int w = info[j].leng;
			dist[i][v] = min(dist[i][v], dist[i][u] + w);
			if(dist[i][v] == dist[i][u] + w)
				pre[v] = u;
		}
	}
	
	vector<int> ans;
	int now =  N - 1;

	while(now != 0)
	{
		ans.push_back(now);
		now = pre[now];
	}
	ans.push_back(0);
	reverse(ans.begin(),ans.end());

	cout << ans.size() << endl;
	rep(i, 0, ans.size())
	{
		if(i == ans.size() - 1)
			cout << ans[i] << endl;
		else
			cout << ans[i] << " ";

	}

	return(0);
}