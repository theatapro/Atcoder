#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

ll	sum(ll num)
{
	return(num * (num + 1) / 2);
}

int	main(void)
{
	ll	N;
	cin >> N;

	ll ng = 0;
	ll ok = 2*INF;
	ll mid = 0;
	ll N_log = N + 1;

	while(1)
	{
		mid = (ok + ng) / 2;
		if (sum(mid) <= N_log && sum(mid + 1) > N_log)
			break;
		else if(sum(mid) <= N_log)
			ng = mid;
		else 
			ok = mid;
	}

	cout <<  N - mid + 1 << endl;
	return 0;
}