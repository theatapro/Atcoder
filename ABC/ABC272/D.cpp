#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

void saiki(vector<pair<int,int> > &dir_list, vector<vector<int> > &ans, int x, int y, int index)
{
	cout << x << y;
	if(index > 4)
		return;
	for(auto p : dir_list)
	{
		if(x + p.first < ans.size() && y + p.second < ans.size() && ans.at(x + p.first).at(y + p.second) == -1)
		{
			ans.at(x + p.first).at(y + p.second) = index;
			index++;
			saiki(dir_list, ans, x + p.first, y + p.second, index);
		}
	}
}

int	main(void)
{
	int N, M;
	cin >> N >> M;
	vector<pair<int,int> > dir_list;
	pair<int,int>  dir_p;
	rep(i, 0, 1000)
	{
		rep(j ,0, 1000)
		{
			if(i*i + j*j == M)
			{
				dir_p.first = i;
				dir_p.second = j;
				dir_list.push_back(dir_p);
			}
		}
	}
	cout << dir_list.size() << endl;
	vector<vector<int> > ans(N, vector<int>(N, -1));
	saiki(dir_list, ans, 0, 0, 1);
	rep(i, 0, N)
		rep(j, 0, N)
			cout << ans.at(i).at(j) << endl;
	return (0);
}