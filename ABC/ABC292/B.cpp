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
	int N,Q;
	cin >> N >> Q;
	vector<int> ten(N+1,2);
	rep(i,0,Q)
	{
		int eve,X;
		cin >> eve >> X;
		if (eve == 1)
			ten[X]--;
		else if (eve == 2)
			ten[X]-=2;
		else
		{
			if(ten[X]>=1)
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
		}
	}
	return(0);
	
}