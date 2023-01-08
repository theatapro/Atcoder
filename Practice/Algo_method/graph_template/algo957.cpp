#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int N, M, s, t;
	cin >> N >> M >> s >> t;
	vector<vector<int> > G(N);
	vector<bool> seen(N, false);

	rep(i, 0, M)
	{
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
	}

	queue<int> que;
	seen[s] = true;
	que.push(s);

	while(!que.empty())
	{
		int v = que.front();
		que.pop();

		for(auto nv : G[v])
		{
			if(nv == t)
			{
				cout << "Yes" << endl;
				return(0);
			}
			if(seen[nv])
				continue;
			else
			{
				seen[nv] = true;
				que.push(nv);
			}
		}
	}

	cout << "No" << endl;
	return(0);
}