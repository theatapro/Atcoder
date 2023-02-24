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
	ll N, A, B;
	string S;
	cin >> N >> A >> B >> S;
	ll zure = 0;
	ll min_money = LINF;

	while(zure < N)
	{
		ll not_same = 0;
		ll now_money = A * zure;
		rep(i, 0, N/2)
		{
			if(S[(i+zure)%N] != S[(N-1-i+zure)%N])
				not_same++;
		}
		now_money += not_same * B;
		min_money = min(min_money, now_money);
		zure++;
	}

	cout << min_money << endl;

}
