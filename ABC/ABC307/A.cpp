#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{
	int N;
	cin >> N;

	rep(j,0,N)
	{
		int wa = 0;
	rep(i,0,7)
	{
		int a;
		cin >> a;
		wa += a; 
	}
	cout << wa << " ";
	}
	return(0);
}