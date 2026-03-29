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
	vector<vector<char> > table_vec(H,vector<char>(W));
	int ini_H = -1;
	int end_H = -1;
	int ini_W = -1;
	int end_W = -1;

	rep(i,0,H)
	{
		int cookie_cnt = 0;
		rep(j,0,W)
		{
			cin >> table_vec[i][j];
			if(table_vec[i][j]=='#')
				cookie_cnt++;
		}
		if(cookie_cnt>0&&ini_H==-1)
			ini_H = i;
		else if(cookie_cnt==0 && ini_H!=-1&& end_H==-1)
			end_H = i - 1;
	}
	if(end_H == -1)
		end_H = H - 1;

	rep(i,0,W)
	{
		int cookie_cnt = 0;
		rep(j,0,H)
		{
			if(table_vec[j][i]=='#')
				cookie_cnt++;
		}
		if(cookie_cnt>0&&ini_W==-1)
			ini_W = i;
		else if(cookie_cnt==0 && ini_W!=-1 && end_W==-1)
			end_W = i - 1;
	}
	if(end_W == -1)
		end_W = W - 1;
	
	// cout << ini_H << end_H << " " << ini_W << end_W <<endl;
	vector<vector<bool> > ideal_vec(H,vector<bool>(W));
	rep(i,0,H)
		rep(j,0,W)
			ideal_vec[i][j]=false;
	rep(i,ini_H,end_H+1)
		rep(j,ini_W,end_W+1)
			ideal_vec[i][j] = true;
	// rep(i,0,H)
	// {
	// 	rep(j,0,W)
	// 		cout << ideal_vec[i][j];
	// 	cout <<endl;
	// }
	rep(i,0,H)
		rep(j,0,W)
			if(ideal_vec[i][j] && table_vec[i][j]=='.')
			{
				cout << i+1 << " " <<j+1<<endl;
				return(0);
			}
	return(0);
}
