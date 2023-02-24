#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

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

int main(void)
{
	int N, M;
	cin >> N >> M;
	set<int> goal;
	rep(i,1,N+1)
		goal.insert(i);
	vector<vector<int> > G(M);
	int ans = 0;
	rep(i, 0, M)
	{
		int C;
		cin >> C;
		rep(j, 0, C)
		{
			int a_i;
			cin >> a_i;
			G[i].push_back(a_i);
		}
	}
	for(int tmp = 0; tmp < (1 << M); tmp++)
	{
		bitset<10> s(tmp);
		set<int> makes;
		rep(i, 0, M)
		{
			if(s.test(i))
				rep(j,0,G[i].size())
					makes.insert(G[i][j]);
		}
		if (makes == goal)
		{
			// cout << "###" << s << endl;
			ans++;
		}
	}

	cout << ans << endl;
}
