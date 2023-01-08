#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int N, M, s, t;
	cin >> N >> M >> s >> t;
	vector<vector<int> > G(N);
	vector<bool> seen(N, false);
	vector<int> ans;
	vector<int> prev(N);

	rep(i, 0, M)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
	}
	
	queue<int> que;
	seen[s] = true;
	que.push(s);
	prev[s] = -1;

	while(!que.empty())
	{
		int v = que.front();
		que.pop();
		for(auto nv: G[v])
		{
			if(!seen[nv])
			{
				seen[nv] = true;
				que.push(nv);
				prev[nv] = v;
			}
		}
	}
	int st = t;
	ans.push_back(t);
	while(prev[st] != -1)
	{
		ans.push_back(prev[st]);
		st = prev[st];
	}

	reverse(ans.begin(),ans.end());

	cout << ans.size() << endl;
	rep(i, 0, ans.size())
		cout << ans[i] << " ";

	return(0);
}