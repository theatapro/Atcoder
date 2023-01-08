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
	vector<vector<int> > dist(N + 1, vector<int>(N, -INF));
	vector<edge> info(M);

	dist[0][0] = 0;
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
			dist[i][v] = max(dist[i][v], dist[i][u] + w);	
		}
	}
	cout << dist[N][N - 1] << endl;

	return(0);
}