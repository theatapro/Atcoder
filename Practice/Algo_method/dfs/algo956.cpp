#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = l; i < (r); i++)

using namespace std;

void	rec(int v,vector<vector<int> > &G,vector<bool> &seen)
{
	seen[v] = true;
	// cout << v << " ";
    for (auto v2 : G[v])
	{
        if (seen[v2])
            continue;
        rec(v2, G, seen);
	}
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<int> > G(N);
	vector<bool> seen(N);
	int a, b;
	int ans = 0;
	rep(i, 0, M)
	{
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	rec(0, G, seen);
	ans++;
	rep(i, 0, N)
	{
		if(!seen[i])
		{
			rec(i, G, seen);
			ans++;
		}
	}
	cout << ans << endl;
}