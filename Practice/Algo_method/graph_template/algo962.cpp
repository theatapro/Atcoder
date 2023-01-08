#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;

void bfs(vector<vector<int> > &G, vector<int> &color, queue<int> &que)
{
	while(!que.empty())
	{
		int v = que.front();
		que.pop();

		for(auto nv : G[v])
		{
			int ncolor;
			if(color[v] == 0)
				ncolor = 1;
			else
				ncolor = 0;
			if(color[nv] == -1)
			{
				color[nv] = ncolor;
				que.push(nv);
			}
		}
	}
	return;
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
	vector<int> color(N, -1);

	rep(i, 0, M)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	queue<int> que;
	
	rep(i, 0, N)
	{
		if(color[i] == -1)
		{
			que.push(i);
			color[i] = 1;
			bfs(G, color, que);
		}
	}

	rep(i, 0, N)
		for(auto v : G[i])
			if(color[i] == color[v])
			{
				cout << "No" << endl;
				return(0);
			}

	cout << "Yes" << endl;



	return(0);
}