#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int	main(void)
{
	ll N;
	cin >> N;
	vector<ll> A(N);
	ll sum = 0;

	rep(i,0,N)
	{
		ll a;
		cin >> a;
		A[i] = a - sum;
		sum += A[i];
	}
	rep(i,0,N)
		cout << A[i] << " ";
	cout  <<endl;
	return(0);
}