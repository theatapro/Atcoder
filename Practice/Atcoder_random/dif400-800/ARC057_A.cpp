#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<ll, ll>;

int main()
{
    ll A, K;
	const ll target = 2e12;
    cin >> A >> K;
	ll money = A;
	ll ans = 0;

	if (K == 0)
	{
		ans = target - A;
		cout << ans << endl;
		return (0);
	}
	while (money < target)
	{
		money += 1 + money * K;
		ans++;
	}
	cout << ans << endl;
}