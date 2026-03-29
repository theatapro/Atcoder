#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;


int main(void)
{
	int H,W;
	cin >> H >> W;
	vector<vector<char> > vec(H,vector<char>(W));
	// vector<vector<char> > vec(H,vector<char>(W));
	rep(i,0,H)
		rep(j,0,W)
			cin >> vec[i][j];
	rep(i,0,H)
	{
		rep(j,0,W-1)
		{
			if(vec[i][j]=='T' && vec[i][j+1] == 'T')
			{
				vec[i][j] = 'P';
				vec[i][j+1] = 'C';
				j++;
			}
		}
	}
	rep(i,0,H)
	{
		rep(j,0,W)
		{
				cout << vec[i][j];
		}
		cout << endl;
	}
		
	return(0);
}
