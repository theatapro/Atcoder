#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	ll N, M;
	cin >> N >> M;

	vector<ll> list(N);
	rep(i, 0, N)
		cin >> list.at(i);
	
	ll sum = 0;
	rep(i, 0, M)
		sum += list[i];
	ll result = 0;
	rep(i, 0, M)
		result += (i + 1) *list[i];

	ll now_result = 0;
	ll ans = result;
	rep(i, 1, N - M + 1)
	{
		now_result = result + (M * list[i + M - 1] - sum);
		sum = sum - list[i - 1] + list[i + M - 1];
		// cout << sum << " " << now_result <<endl;
		result = now_result;
		ans = max(result, ans);
	}
	cout << ans << endl;
}