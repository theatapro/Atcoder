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

int ans = 0;

void dfs(vector<set<int>> &G, vector<bool> &seen, int v)
{
	for(auto nv: G[v])
	{
		// cout << nv 
		if(nv == 0)
		{
			ans++;
			if(ans > 1000001)
				return;
		}
		else if(!seen[nv])
		{
			G[nv].erase(v);
			seen[nv] = true;
			dfs(G, seen, nv);
			seen[nv] = false;
			G[nv].insert(v);
		}
	}
}

int	main(void)
{
	int N, M;
	cin >> N >> M;
	vector<set<int>> G(N + 1);
	vector<bool> seen(N + 1);

	rep(i, 1, N + 1)
		G[i].insert(0);
	rep(i, 0, M)
	{
		int A, B;
		cin >>A >> B;
		G[A].insert(B);
		G[B].insert(A);
	}
	seen[1] = true;

	dfs(G, seen, 1);

	cout << min(ans, 1000000) << endl;

	return(0);
}
