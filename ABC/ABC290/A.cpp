#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

ll my_gcd(ll x, ll y)
{
    if(x % y == 0)
        return y;
    else
        return my_gcd(y, x % y);
}

ll my_lcm(ll x, ll y)
{
    return(x * y / my_gcd(x, y));
}

int	main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> Q(N);
	rep(i,0,N)
		cin >> Q[i];
	int ans = 0;
	rep(i,0,M)
	{
		int ac;
		cin >> ac;
		ac--;
		ans += Q[ac];
	}
	cout << ans << endl;
return (0);

}