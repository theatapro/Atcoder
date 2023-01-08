#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	int N;
	vector<int> list(101);
	int ans = 0;

	rep(i, 0, 5)
	{
		cin >> N;
		list.at(N)++;
	}

	rep(i, 0, 101)
	{
		if(list.at(i) > 0)
			ans++;
	}
	cout << ans << endl;
}