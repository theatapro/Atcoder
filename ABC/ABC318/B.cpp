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
	int N;
	cin >> N;
	vector<vector<bool> > masu(100,vector<bool>(100));
	vector<int> strong;

	// vector<bool> day(D);
	rep(i,0,N)
	{
		int A, B, C, D;
		cin >> A >> B >> C >> D;
		// B--;
		// D--;
		rep(x,A,B)
			rep(y,C,D)
				masu[x][y] = true;
	}
	int ans = 0;
	rep(i,0,100)
		rep(j,0,100)
			if(masu[i][j])
				ans++;
	cout << ans <<endl;
	return(0);
}