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
	string S;
	cin >> S;
	ll ans = 0;
	for(int i = S.size() - 1; i > -1; i--)
	{
		ans += (ll)pow(26,S.size()-1-i)*(S[i]-'A'+1);
	}
	// ans++;

	cout << ans << endl;

}
