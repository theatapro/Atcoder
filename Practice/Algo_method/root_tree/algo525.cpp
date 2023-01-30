#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;
using P = pair<int, int>;


void dfs(vector<vector<int> > &G, vector<bool> &seen, int v)
{
	for(auto nv: G[v])
	{
		if(!seen[nv])
		{
			cout << nv << " ";
			dfs(G, seen, nv);
		}
	}
}

int main(void)
{
	int N;
	cin >> N;
	vector<vector<int> > G(N);
	vector<bool> seen(N);

	rep(i, 1, N)
	{
		int r;
		cin >> r;
		G[r].push_back(i);
	}

	seen[0] = true;
	cout << 0 << " ";

	dfs(G, seen, 0);

	return(0);
}