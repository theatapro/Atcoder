#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
	vector<int> dist(N, -1);
	vector<vector<int> > nodes(N);

	rep(i, 0, M)
	{
		int A, B;
		cin >> A >> B;
		G[A].push_back(B);
		G[B].push_back(A);
	}

	dist[0] = 0;
	nodes[0].push_back(0);

	rep(i, 1, N)
		for(auto v : nodes[i-1])
			for(auto av : G[v])
			{
				if(dist[av] == -1)
				{
					dist[av]= i;
					nodes[i].push_back(av);
					// cout << av;
				}
			}
	rep(i, 0, N)
		sort(nodes[i].begin(),nodes[i].end());
	rep(i, 0, N)
	{
		for(int j = 0; j < nodes[i].size(); j++)
		{
			if(j == nodes[i].size() - 1)
				cout << nodes[i][j] << endl;
			else
				cout << nodes[i][j] << " ";
		}
	}
	return(0);
}