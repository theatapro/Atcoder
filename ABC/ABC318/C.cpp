#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

int main(void)
{
	ll N,D,P;
	cin >> N >> D >>P;
	vector<ll> vec(N);
	rep(i,0,N)
	{
		cin >> vec[i];
	}
	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	ll ans = 0;
	ll day = 0;
	while(day<N)
	{
		ll sum = 0;
		rep(i,day,day + D)
		{
			if(i>=N)
				break;
			sum+=vec[i];
		}
		// cout << "D" << sum;
		if(sum>P)
			ans+=P;
		else
			ans+=sum;
		day = day + D;
	}
	cout << ans << endl;
	return(0);
}
