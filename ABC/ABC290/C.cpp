#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

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

int main(void)
{
	int N, K;
	cin >> N >> K;
	set<int> num;
	rep(i,0,N)
	{
		int n;
		cin >> n;
		num.insert(n);
	}
	int ans = 0;
	rep(i,0,1000000)
	{
		if (num.count(i))
			ans ++;
		else
			break;
	}

	cout << min(ans,K) << endl;
}
