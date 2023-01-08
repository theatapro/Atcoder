#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
typedef long long ll;
using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<ll> > G(N);
	vector<bool> done(N);
	vector<ll> izon(N, 0);

	rep(i, 0, M)
	{
		ll f,s;
		cin >> f >> s;
		G[f].push_back(s);
		izon[s]++;
	}

	queue<ll> que;
	rep(i, 0, N)
		if(izon[i] == 0)
			que.push(i);

	while(!que.empty())
	{
		ll sub = que.front();
		done[sub] = true;
		que.pop();
		for(ll nsub : G[sub])
		{
			if(!done[nsub])
			{
				izon[nsub]--;
				if(izon[nsub] == 0)
					que.push(nsub);
			}
		}
	}

	rep(i,0,N)
	{
		if(done[i] == false)
		{
			cout << "No" << endl;
			return(0);
		}
	}
	cout << "Yes" << endl;
	return(0);
}