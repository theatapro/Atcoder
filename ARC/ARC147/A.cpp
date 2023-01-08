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
	priority_queue<ll> max_list;
	priority_queue<ll, vector<ll>, greater<ll> > min_list;

	rep(i, 0, N)
	{
		cin >> list.at(i);
		max_list.push(list.at(i));
		min_list.push(list.at(i));
	}

	ll ans = 0;
	ll min = 0;
	ll max = 0;
	ll result = 0;
	while(max_list.size() > 1)
	{
		min = min_list.top();
		max = max_list.top();
		result = max % min;
		max_list.pop();
		if (result < min && result != 0)
		{
			min_list.pop();
			min_list.push(result);
		}
		if (result != 0)
			max_list.push(result);
		ans ++;
	}
	cout << ans << endl;
}