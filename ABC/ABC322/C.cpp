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

	ll N,M;
	cin >> N >> M;
	vector<ll> A(M);
	rep(i,0,M)
		cin >> A[i];
	//1,111,111,111
	//0000000100
	rep(i,0,N)
	{
		auto b = lower_bound(A.begin(),A.end(),i+1);
		ll x = (ll)(b - A.begin());
		cout << A[x] - (i+1) << endl;
	}
	return(0);
}
