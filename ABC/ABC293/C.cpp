#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

int ans;
void bfs(vector<vector<int> > &Masu, set<int> seen, P pos)
{
	// cout << " nowpos" << pos.first << " " <<pos.second << endl;

	if (seen.count(Masu[pos.first][pos.second]))
	{
		// cout << "No" << endl;
		return;
	}
	seen.insert(Masu[pos.first][pos.second]);
	if(pos.first == Masu.size()-1 && pos.second == Masu[0].size()-1)
	{
		// cout << "Ans!" ;
		ans++;
	}
	// moveright
	if(Masu[0].size() - 1 > pos.second)
	{
		pos.second++;
		// cout << "R" << endl;
		bfs(Masu,seen,pos);
		pos.second--;
	}
	// movedown
	if(Masu.size() - 1 > pos.first)
	{
		pos.first++;
		// cout << "D" << endl;
		bfs(Masu,seen,pos);
	}
}

int main(void)
{
	int H, W;
	cin >> H >> W;
	vector<vector<int> > Masu(H,vector<int>(W));
	rep(i,0,H)
		rep(j,0,W)
			cin >> Masu[i][j];
	ans = 0;
	set<int> seen;
	P pos;
	pos = {0,0};
	bfs(Masu,seen,pos);
	cout << ans << endl;
	return(0);
}
