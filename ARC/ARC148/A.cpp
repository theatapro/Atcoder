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
	vector<bool> isprime = Eratosthenes(10000);

	sort(list.begin(),list.end());

	if (list.at(N - 1) == 0)
	{
		cout << 1 <<endl;
		return(0);
	}
	if (list.at(N - 1) == 1)
	{
		ll cnt_one = 0;
		rep(j, 0, N)
		{
			if(list.at(j) != 1)
				break;
			cnt_one++;
		}
		if(cnt_one == N)
			cout << 1 <<endl;
		else
			cout << 2 <<endl;
		return(0);
	}

	vector<ll> new_list(N);
	rep(i, 0, N - 1)
		new_list[i] = list[i + 1] - list[i];
	
	rep(i, 0, isprime.size())
	{
		if(isprime.at(i) && (new_list[0] % i == 0 || new_list[0] == 0))
		{
			ll cnt = 0;
			rep(j, 0, N - 1)
			{
				if(new_list.at(j) % i != 0 && new_list[0] != 0)
					break;
				cnt++;
				// cout << cnt <<endl;
			}
			if(cnt == N - 1)
			{
				cout << 1 <<endl;
				return(0);
			}
		}
	}
	cout << 2 <<endl;
	return(0);

}