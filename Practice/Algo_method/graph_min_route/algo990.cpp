#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;
using P = pair<int, int>;

struct edge {
	int from;
	int to;
	int leng;
};

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > dist(2*N + 1, vector<int>(N, 1e9));
	vector<edge> info(M);

	dist[0][0] = 0;
	rep(i, 0, M)
		cin >> info[i].from >> info[i].to >> info[i].leng;

	rep(i, 1, 2*N + 1)
	{
		dist[i] = dist[i-1];
		rep(j, 0, M)
		{
			int u = info[j].from;
			int v = info[j].to;
			int w = info[j].leng;
			dist[i][v] = min(dist[i][v], dist[i][u] + w);	
		}
	}
	bool flag = false;
	rep(i, 0, N)
		if(dist[N + i][N - 1] != dist[N + i + 1][N - 1])
			flag = true;

	if(dist[N][N - 1] > 100010)
	{
		cout << "impossible" << endl;
		return(0);
	}
	if(flag)
	{
		cout << "-inf" << endl;
		return(0);
	}
	else
		cout << dist[N][N - 1] << endl;

	return(0);
}