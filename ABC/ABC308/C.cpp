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
	int N, K;
	cin >> N >> K;
	map<ll,ll> medecine;
	set<ll> days;
	ll sum = 0;
	rep(i,0,N)
	{
		ll a, b;
		cin >> a >> b;
		medecine[a] += b;
		days.insert(a);
		sum += b;
	}
	if(sum <= K)
	{
		cout << 1 << endl;
		return(0);
	}
	for(auto d: days)
	{
		sum -= medecine[d];
		if(sum <= K)
		{
			cout << d + 1<< endl;
			return(0);
		}
	}

	return(0);
}
