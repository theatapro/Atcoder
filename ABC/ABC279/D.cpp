#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	ll A,B;
	cin >> A >> B;

	double long x1;
	x1 = cbrt(A) / cbrt(2*B);
	x1 = x1 * x1; 

	ll x2;
	x2 =(ll)(x1);
	double long ans;
	ans = B*x2 +(A/sqrt(1+x2));
	
	cout << setprecision(30) << ans << endl;

}