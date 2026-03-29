#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int DIV = 1e8;


using namespace std;
using P = pair<ll, ll>;

int	main(void)
{	
	int N;
	cin >> N;
	ll H = (ll)pow(3,N);
	vector<vector<char> > ans(H,vector<char>(H,'#'));
	int div = 1;
	for(int i=N;i>=0;i--)
	{
		int X = (int)pow(3,i-1);
		rep(c,0,(int)pow(9,N-i))
		{
			//i=2,sx=0,sy=0
			int sx = 3*(c%(int)pow(3,N-i));
			int sy = 3*(c/(int)pow(3,N-i));
			rep(x,(sx+1)*X,(sx+1)*X+X)
				rep(y,(sy+1)*X,(sy+1)*X+X)
				{
						ans[x][y]='.';
					}
				}
	// cout << i << "***************"<<endl;
	// rep(I,0,H)
	// {
	// 	rep(J,0,H)
	// 	{
	// 		cout << ans[I][J];
	// 	}
	// 	cout << endl;
	// }
	}
	rep(i,0,H)
	{
		rep(j,0,H)
		{
			cout << ans[i][j];
		}
		cout << endl;
	}

	return(0);
}