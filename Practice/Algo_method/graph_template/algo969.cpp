#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

bool dfs(int s,int t, vector<vector<int> > &G, vector<bool> &seen, vector<int> &ans)
{
	if(s == t)
		return(true);

	seen[s] = true;
	
	for(int nv : G[s])
	{
		if(!seen[nv])
		{
			ans.push_back(nv);
			if(dfs(nv, t, G, seen, ans))
				return(true);
			else
				ans.pop_back();
		}
	}
	return(false);
}

int main(void)
{
	int N, M, s, t;
	cin >> N >> M >> s >> t;
	vector<vector<int> > G(N);
	vector<bool> seen(N, false);
	vector<int> ans;

	rep(i, 0, M)
	{
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
	}

	ans.push_back(s);

	dfs(s, t, G, seen, ans);
	cout << ans.size() << endl;
	rep(i, 0, ans.size())
		cout << ans[i] << " ";
	return(0);
}