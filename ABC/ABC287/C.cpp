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
	map<int, int> num_cnt;
	vector<vector<int> > G(N);
	vector<bool> check(N);

	int ans1 = 0;
	int ans2 = 0;
	
	if (M != N - 1)
	{
		cout << "No" << endl;
		return (0);
	}
	else
	{
		rep(i,0,M)
		{
			int n, v;
			cin >> n >> v;
			num_cnt[n]++;
			num_cnt[v]++;
			G[n-1].push_back(v-1);
			G[v-1].push_back(n-1);
		}
	}

	queue<int> path;
	path.push(0);
	check[0] = true;
	// cout << "nex : " << endl;
	while (!path.empty())
	{
		int now = path.front();
		path.pop();
		for(auto nex : G[now])
		{
			if(!check[nex])
			{
				path.push(nex);
				check[nex] = true;
			}
		}
	}
	rep(i,0,N)
		if(check[i] == false)
		{
			cout << "No" << endl;
			return(0);
		}

	rep(i,1,N+1)
		{
			if (num_cnt[i] == 1)
				ans1++;
			else
				ans2++;
		}
	if (ans1 == 2 && ans2 == N - 2)
	{
		cout << "Yes" << endl;
		return(0);
	}
	cout << "No" << endl;
	return (0);
}
