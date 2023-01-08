#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	int	N, L, K;
	cin >> N >> L >> K;
	vector<int> list(N + 2);
	list.at(0) = 0;
	rep(i, 1, N + 1)
		cin >> list.at(i);
	list.at(N + 1) = L;
	int	ok = 0;
	int ng = L;
	int mid = 0;
	int len = 0;
	int s = 1;
	int stock_k = K;

	while (abs(ng - ok) > 1)
	{
		mid = (ok + ng) / 2;

		rep(i, s, N + 2)
		{
			len += list.at(i) - list.at(i - 1);
			if (len >= mid)
			{
				s = i + 1;
				len = 0;
				K--;
				if (K == 0)
					break;
			}
		}
		rep(i, s, N + 2)
			len += list.at(i) - list.at(i - 1);
		if (K == 0 && len >= mid)
			ok = mid;
		else
			ng = mid;
		K = stock_k;
		s = 1;
		len = 0;
	}
	cout << ok << endl;
}