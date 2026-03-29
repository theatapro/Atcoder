#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

bool yoko(vector<vector<int>> &input)
{
	bool ret = true;
	rep(i,0,9)
	{
		set<int> se;
		rep(j,0,9)
		{
			se.insert(input[i][j]);
		}
		if(se.size()!=9)
			return(false);
	}
	return(ret);
}

bool tate(vector<vector<int>> &input)
{
	bool ret = true;
	rep(i,0,9)
	{
		set<int> se;
		rep(j,0,9)
		{
			se.insert(input[j][i]);
		}
		if(se.size()!=9)
			return(false);
	}
	return(ret);
}

bool area(vector<vector<int>> &input)
{
	bool ret = true;
	rep(x,0,3)
		rep(y,0,3)
		{
			set<int> se;
			rep(i,3*x,3*(x+1))
			{
				rep(j,3*y,3*(y+1))
				{
					se.insert(input[i][j]);
				}
			}
			if(se.size()!=9)
				return(false);
		}
		return(ret);
	
}

int main(void)
{
	vector<vector<int> > inp(9,vector<int>(9));
	rep(i,0,9)
		rep(j,0,9)
			cin >> inp[i][j];

	if(yoko(inp) && tate(inp) && area(inp))
	{
		cout << "Yes" << endl;
		return (0);
	}
	cout << "No" << endl;
	return (0);
}
