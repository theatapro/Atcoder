#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	int	N, K;
	cin >> N >> K;
	vector<int> list(N);
	rep(i, 0, N)
		cin >> list.at(i);
	int ng = -1;
	int ok = N;
	int mid = 0;

	while(abs(ok - ng) > 1)
	{
		mid = (ok + ng) / 2;
		if (list.at(mid) < K)
			ng = mid;
		else
			ok = mid;
	}
	if (ok != N)
		cout << ok << endl;
	else
		cout << -1 << endl;
	return 0;
}