#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
	vector<int> dist(N, -1);
	// vector<vector<int> > nodes(N);

	rep(i, 0, M)
	{
		int A, B;
		cin >> A >> B;
		G[A].push_back(B);
		G[B].push_back(A);
	}
	queue<int> que;
	dist[0] = 0;
	que.push(0);

	while(!que.empty())
	{
		int v = que.front();
		que.pop();

		for(auto nv : G[v])
		{
			if(dist[nv] != -1)
				continue;
			else
			{
				dist[nv] = dist[v] + 1;
				que.push(nv);
			}
		}
	}
	
	int ans = 0;
	rep(i, 0, N)
		ans = max(ans, dist[i]);

	cout << ans << endl;
	return(0);
}