#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	int X,Y;
	cin>> X >> Y;
	if(Y-2 <= X && Y+3 >= X)
	{
		cout << "Yes" << endl;
		return (0);
	}
	cout << "No" << endl;
	return(0);
}