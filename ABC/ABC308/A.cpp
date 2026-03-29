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
	int A,B;
	cin >> A >>B;

	if(abs(A-B)==1 && min(A,B)%3!=0)
	{
		cout << "Yes" << endl;
		return(0);
	}
	cout << "No" << endl;
	return(0);
}