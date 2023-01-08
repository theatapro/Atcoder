#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int	main(void)
{
	ll N, M;
	cin >> N >> M;
	vector<string> A(N);
	ll ans= 0;

	rep(i,0,N)
		cin >> A[i];
	rep(i,0,N)
		rep(j,i+1,N)
		{
			bool able = true;
			rep(k,0,M)
				if(A[i][k] == 'x' && A[j][k] == 'x')
					able = false;
			if(able)
				ans++;
		}
	cout << ans << endl;
	return(0);
}