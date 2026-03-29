#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

ll prime(ll N)
{
	ll ret = 1;
	if (N == 1)
		return(1);
	else
	{
		// bool flag = false;
		// int A = N;
		for(ll i = 2; i*i <= N; i++)
		{
			int cnt = 0;
			while(N%i==0)
			{
				cnt++;
				N/=i;
				// flag = true;
			}
			ret *= (cnt+1);
		}
		if(N!=1)
			ret *= 2;
		// if (!flag)
		// 	ret *= 2;

	}
	return(ret);
}

int main(void)
{
	ll N;
	cin >> N;
	vector<ll> sum(N);
	ll ans = 0;
	repd(i, N - 1, 1)
	{
		sum[i] = prime(i);
		// cout << sum[i] << " ";
	}
	rep(i,1,N)
		ans += sum[i] * sum[N - i];
	cout << ans << endl;
	return(0);
}
