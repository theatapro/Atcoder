#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int	main(void)
{
	ll A,B;
	cin >> A >> B;
	ll ans = 0;
	// int i=0;
	while(A!=B)
	{
		// cout << A << " " << B << endl;
		if(A%B == 0|| B%A == 0)
		{
			ans += max(A,B)/min(A,B) - 1;
			break;
		}
		else if(A<B)
		{
			ans += B/A;
			B-=A*(B/A);
		}
		else
		{
			ans += A/B;
			A-=B*(A/B);
		}
		// i++;
	}
	cout << ans << endl;
	
}
