#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int	main(void)
{
	ll A,B,C,D,E,F;
	cin >> A >>B >>C>>D>>E>>F;
	ll ans=0;
	ll AB,ABC,DE,DEF;
	rep(i,0,3)
	{
		A %= MOD;
		B %= MOD;
		C %= MOD;
		D %= MOD;
		E %= MOD;
		F %= MOD;
	}
	AB = (A*B)%MOD;
	ABC = (AB*C)%MOD;
	DE = (D*E)%MOD;
	DEF = (DE*F)%MOD;
	ans = ABC - DEF;
	if(ans<0)
		ans += MOD;
	ans %= MOD;
	cout << ans << endl;
}