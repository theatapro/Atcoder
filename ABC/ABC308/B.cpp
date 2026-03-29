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
	vector<vector<int> > masu(N,vector<int>(N));
	vector<vector<int> > new_masu(N,vector<int>(N));
	rep(i,0,N)
		rep(j,0,N)
		{
			char c;
			cin >> c;
			masu[i][j] = c-'0';
		}
			
	new_masu = masu;

	rep(j,1,N)
		new_masu[0][j]=masu[0][j-1];
	rep(i,1,N)
		new_masu[i][N-1]=masu[i-1][N-1];
	repd(j,N-2,0)
		new_masu[N-1][j]=masu[N-1][j+1];
	repd(i,N-2,0)
		new_masu[i][0]=masu[i+1][0];
	rep(i,0,N)
	{
		rep(j,0,N)
			cout << new_masu[i][j];
		cout << endl;
	}
	return(0);
	
}