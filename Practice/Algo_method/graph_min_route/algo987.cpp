#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;
using P = pair<int, int>;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> dist(N, 1e9);

	dist[0] = 0;
	rep(i, 0, M)
	{
		int u, v, w;
		cin >> u >> v >> w;
		dist[v] = min(dist[v], dist[u] + w);
	}
	
	rep(i, 0, N)
		cout << dist[i] << endl;

	return(0);
}