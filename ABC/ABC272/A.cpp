#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	int N;
	int ans = 0;
	cin >> N;
	rep(i, 0, N)
	{	
		int A;
		cin >> A;
		ans += A;
	}
	cout << ans << endl;
}