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

using namespace std;
using P = pair<ll, ll>;

ll tak_max = -LINF;
bool judge_full(vector<vector<int> > board_sta)
{
	rep(i,0,3)rep(j,0,3)
		if(board_sta[i][j]==-1)
			return(true);
	return(false);
}
bool line(int a, int b, int c, int x, vector<vector<int> > &board_sta)
{
	int a_i = a/3;
	int a_j = a%3;
	int b_i = b/3;
	int b_j = b%3;
	int c_i = c/3;
	int c_j = c%3;

	if(board_sta[a_i][a_j]==x && board_sta[b_i][b_j]==x && board_sta[c_i][c_j]==x)
		return(true);
	return(false);
}
bool judge_lose(vector<vector<int> > &board_sta)
{
	line(0,1,2,2,board_sta);
	line(0,3,6,2,board_sta);
	line(0,1,2,2,board_sta);
	line(0,1,2,2,board_sta);
	line(0,1,2,2,board_sta);
	line(0,1,2,2,board_sta);
	line(0,1,2,2,board_sta);
	line(0,1,2,2,board_sta);

}
void dfs(vector<vector<int> > &board_score,vector<vector<int> > board_sta,ll tak_point,ll turn)
{
	if(judge_full(board_sta))
	{
		tak_max = max(tak_max,tak_point);
		return;
	}
	if(judge_lose(board_sta))
		return;
	else{
		rep(i,0,3)
		{
			rep(j,0,3)
			{
				if(board_sta[i][j]!=-1)
				{
					if(turn%2==0)
					{
						tak_point += board_score[i][j];
						board_sta[i][j] = 1;
					}
					else
						board_sta[i][j] = 2;
					dfs(board_score,board_sta,tak_point,turn++);
				}
			}
		}
	}
}

int main(void)
{
	vector<vector<int> > board_score(3,vector<int>(3));
	vector<vector<int> > board_sta(3,vector<int>(3,-1));
	ll tak_point = 0;
	dfs(board_score,board_sta,tak_point,0);
	
	return(0);
}