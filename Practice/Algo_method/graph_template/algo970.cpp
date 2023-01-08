#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;
int ans = 0;


void dfs(int n, vector<vector<int> > &G, vector<bool> &seen, vector<bool> &finished)
{
	seen[n] = true;
	for(auto nv:G[n])
	{
		if(!seen[nv])
			dfs(nv, G, seen, finished);
		else
			if(!finished[nv])
				ans = -1;
	}
	finished[n] = true;
	return;
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
	vector<bool> seen(N);
	vector<bool> finished(N);

	rep(i, 0, M)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
	}

	rep(i, 0, N)
		sort(G[i].begin(), G[i].end());

	rep(i, 0, N)
		if(!seen[i])
			dfs(i, G, seen, finished);
	if(ans == -1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return(0);
}