#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	int N, M;
	cin >> N >> M;
	vector<vector<bool> > list(N, vector<bool>(N));

	rep(i, 0, M)
	{
		int k;
		cin >> k;
		vector<int> list_k;
		rep(j, 0, k)
		{
			int x;
			cin >> x;
			list_k.push_back(x);
		}
		rep(num, 0, list_k.size() - 1)
		{
			rep(num2, num + 1, list_k.size())
			{
				list.at(list_k.at(num) - 1).at(list_k.at(num2) - 1) = true;
			}
		}
	}
	rep(i, 0, N - 1)
	{
		rep(j, i + 1, N)
		{
			if(list.at(i).at(j) != true)
			{
				cout << "No" << endl;
				return(0);
			}
		}
	}
	cout << "Yes" << endl;
}