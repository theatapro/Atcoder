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

	vector<ll> point_list(N);
	vector<ll> left(N);
	vector<ll> come(N);

	ll ans = 0;

	rep(i, 0, N)
	{
		if(i == 0)
		{
			rep(j, 0, N)
				if(j == list[(j + N) % N] || j == list[(j - 1 + N) % N] ||j == list[(j + 1 + N) % N])
					point_list.at(i)++;
		}
		else
			point_list.at(i) = point_list.at(i - 1) - left.at(i - 1) + come.at(i - 1);
		
		if(i == list[(i - 2 + N) % N])
			come.at(i)++;
		if(i == list[(i + 1) % N])
			left.at(i)++;
		// cout << point_list.at(i) << endl;
		ans = max(ans, point_list.at(i));
	}
	

	// rep(i, 0, N)
	// {
	// 	if(i == list[i] || i == list[(i - 1 + N) % N] ||i == list[(i + 1) % N])
	// 		point_list.at(0)++;
	// 	if(i == list[(i - 2) % N])
	// 		come.at(0)++;
	// 	if(i == list[(i + 1) % N])
	// 		left.at(0)++;
		
	// 	// cout << list[(i - 1) % N] <<endl;
	// }

	// cout << point_list.at(0) <<endl;
	// cout << come.at(0) <<endl;
	// cout << left.at(0) <<endl;

	// rep(i, 1, N)
	// {
	// 	point_list.at(i) = point_list.at(i - 1) - left.at(i - 1) + come.at(i - 1);
	// 	if(i == list[(i - 2) % N])
	// 		come.at(i)++;
	// 	if((i + 1) % N)
	// 		left.at(i)++;
	// 	cout << point_list.at(i) <<endl;
	// }
	cout << ans << endl;
	
	return (0);
}