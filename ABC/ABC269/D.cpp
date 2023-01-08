#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	ll N;
	cin >> N;
	vector<vector<pair<int,int> > > group(1000);

	int group_num = 0;
	int pair_num = 0;
	rep(k, 0, N)
	{
		int i, j;
		cin  >> i >> j;
		if(group_num == 0)
			group.at(group_num).push_back(make_pair(i, j));
		else
			rep(l, 0, group_num)
			{
				rep(m, 0, group.at(group_num).size())
				{
					int x = group.at(group_num).at(m).first;
					int y = group.at(group_num).at(m).second;
					if(i == x - 1 && j == x - 1);
				}
			}
	}

	return (0);
}