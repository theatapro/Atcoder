#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<ll, ll>;

int	main(void)
{
	ll L, A, B;
	cin >> L >> A >> B;
	// vector<P> A_p(A);
	// vector<P> B_p(B);
	map<ll,ll> A_map;
	ll sum_A = 0;
	map<ll,ll> B_map;
	ll sum_B = 0;
	vector<ll> swich_time(A+B);

	rep(i,0,A)
	{
		ll v,l;
		cin >> v >> l;
		A_map[sum_A] = v;
		swich_time[i] = sum_A;
		sum_A+=l;
		// A_p[i] = {v,l};
	}
	rep(i,0,B)
	{
		ll v,l;
		cin >> v >> l;
		B_map[sum_B] = v;
		swich_time[A+i] = sum_B;
		sum_B+=l;
		// A_p[i] = {v,l};
	}
	sort(swich_time.begin(),swich_time.end());
	// rep(i,0,A+B)
	// 	cout << swich_time[i] << " ";
	bool eq_flag = false;
	ll eq_time = 0;
	ll ans = 0;
	ll now_A = 0;
	ll now_B = 0;
	ll now = 0;
	rep(i,0,A+B)
	{
		now = swich_time[i];
		if (A_map.count(now))
			now_A = A_map[now];
		if (B_map.count(now))
			now_B = B_map[now];
		if (eq_flag && now_A != now_B)
		{
			ans += now - eq_time;
			eq_flag = false;
			// cout << "not_eq" << now << endl;
		}
		if (now_A == now_B)
		{
			if(eq_flag)
				ans += now - eq_time;
			eq_flag = true;
			eq_time = now;
			// cout << "eq" << eq_time << endl;
		}
		// cout << endl << A_map[swich_time[i]] << " "<< B_map[swich_time[i]] << endl;
	}
	if(eq_flag)
		ans += L - eq_time;
	cout << ans << endl;

	return(0);
}
