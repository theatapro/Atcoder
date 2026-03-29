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
using P = pair<int, int>;

bool valid_move(vector<vector<char> >meiro,int H,int W,int S_i,int S_j,char dir)
{
	// bool check =true;
	if(dir == 'U')
	{
		if(S_i-1>=0&&meiro[S_i-1][S_j]!='#')
			return(true);
	}
	if(dir == 'L')
		if(S_j-1>=0&&meiro[S_i][S_j-1]!='#')
			return(true);
	if(dir == 'D')
		if(S_i+1<H&&meiro[S_i+1][S_j]!='#')
			return(true);
	if(dir == 'R')
		if(S_j+1<W&&meiro[S_i][S_j+1]!='#')
			return(true);
	return(false);
}
int	main(void)
{	
	int H,W;
	int S_i,S_j;
	string X;
	cin >> H >> W >> S_i >> S_j;
	S_i--;
	S_j--;
	vector<vector<char> > meiro(H,vector<char>(W));
	rep(i,0,H)rep(j,0,W)
		cin >> meiro[i][j];
	cin >> X;
	rep(a,0,X.size())
	{
		char dir = X[a];
		if(valid_move(meiro,H,W,S_i,S_j,dir))
		{
			if(dir == 'U')
				S_i--;
			if(dir == 'L')
				S_j--;
			if(dir == 'D')
				S_i++;
			if(dir == 'R')
				S_j++;
		}
	}
	cout << S_i+1 << " " << S_j+1;
	return (0);
}