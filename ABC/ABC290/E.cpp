#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

ll my_gcd(ll x, ll y)
{
    if(x % y == 0)
        return y;
    else
        return my_gcd(y, x % y);
}

ll my_lcm(ll x, ll y)
{
    return(x * y / my_gcd(x, y));
}

void bfs(vector<vector<int> > &G, set<int> blue)
{
	queue<int> que;
	que.push(1);
	bool T_color = blue.count(1);
	while(1)
	{
		int v = que.front();
		for(auto nv : G[v])
		{
			
		}
	}
}

int	main(void)
{
	int T;
	rep(t,0,T)
	{
		int N, M;
		cin >> N >> M;
		set<int> blue;
		set<int> red;
		vector<vector<int> > G(N + 1);
		rep(i, 1, N + 1)
		{
			int color;
			cin >> color;
			if(color)
				blue.insert(i);
		}
		rep(i, 0, M)
		{
			int n, v;
			cin >> n >> v;
			G[n].push_back(v);
			G[v].push_back(n);
		}
		bfs(G, blue, red);
	}
	return(0);
}
