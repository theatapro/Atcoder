#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
	vector<int> deg(N);

	rep(i, 0, M)
	{
		int a, b;
		cin >> a >> b;
		deg[a]++;
		G[b].push_back(a);
	}

	rep(i, 0, N)
		sort(G[i].begin(), G[i].end());
	
	queue<int> que;

	rep(i, 0, N)
		if(deg[i] == 0)
			que.push(i);
	
	while(!que.empty())
	{
		int v = que.front();
		que.pop();
		for(auto nv: G[v])
		{
			deg[nv]--;
			if(deg[nv] == 0)
				que.push(nv);
		}
	}
	
	rep(i, 0, N)
	{
		if(deg[i] !=0)
		{
			cout << "Yes" << endl;
			return(0);
		}
	}
	cout << "No" << endl;

	return(0);
}