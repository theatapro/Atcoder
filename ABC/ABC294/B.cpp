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
	int H,W;
	cin >> H >> W;
	vector<vector<int> > vec(H,vector<int>(W));
	rep(i,0,H)
		rep(j,0,W)
			cin >> vec[i][j];
	rep(i,0,H)
	{
		rep(j,0,W)
		{
			if(vec[i][j]==0)
				cout << ".";
			else
			{
				char c = 'A'+vec[i][j]-1;
				cout << c;
			}
		}
		cout << endl;
	}
	return(0);
	
}