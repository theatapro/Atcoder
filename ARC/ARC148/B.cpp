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

	vector<ll> list(N);
	rep(i, 0, N)
		cin >> list.at(i);

	rep(i, 0, N / 2)
	{
		rep(j, 0, N)
		{
			if (j % 2 == 0 && list.at(j) % 2 != 0)
				for(ll k = j + 1; k < N; k+=2)
				{
					if (list[k] % 2 == 1)
					{
						swap(list[j],list[k]);
						cout << "A " << j << endl;
						break;
					}
					else
					{
						swap(list[j],list[k]);
						cout << "A " << j << endl;
					}
				}

		}
	}

	return (0);
}