#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	ll	N, Q;
	cin >> N >> Q;
	vector<ll> list(N);
	rep(i, 0, N)
		cin >> list.at(i);
	sort(list.begin(), list.end());

	ll ng = -1;
	ll ok = N;
	ll mid = 0;
	ll x = 0;

	rep(i, 0, Q)
	{
		cin >> x;
		while(abs(ok - ng) > 1)
		{
			mid = (ok + ng) / 2;
			if (list.at(mid) < x)
				ng = mid;
			else
				ok = mid;
		}
		cout << N - ok << endl;
		ng = -1;
		ok = N;
		mid = 0;
	}

	return 0;
}