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

int	main(void)
{	
	string T;
	int N;
	cin >> T >> N;
	vector<vector<int> > dp(N+101,vector<int>(T.size()+101,INF));
	vector<vector<string> > s_vec(N);
	rep(i,0,N)
	{
		int A;
		cin >> A;
		rep(j,0,A)
		{
			string S;
			cin >> S;
			s_vec[i].push_back(S);
		}
	}
	rep(j,0,T.size())
		dp[0][0]=0;
	rep(x,0,N)
	{
		//N個目の袋から文字を選ぶ場合
		rep(i,0,s_vec[x].size()){
			string s = s_vec[x][i];
			int plus_y = s.size();
			// cout << s << endl;
			rep(y,0,T.size())
			{
				//sがTのy文字以降一致しているか
				bool comp = true;
				rep(s_i,0,s.size())
				{
					if(T[y+s_i]!=s[s_i] || y+s_i>=T.size())
					{
						comp = false;
						break;
					}
				}
				if(comp)
				{
					dp[x+1][y+plus_y] = min(dp[x][y]+1,dp[x+1][y+plus_y]);
					// cout << "true" << endl;
				}
			}
		}
		//N個目の袋から文字を選ばない場合
		rep(yy,0,T.size())
		{
			dp[x+1][yy]=min(dp[x][yy],dp[x+1][yy]);
		}
	}

	// rep(X,0,N+1)
	// 	rep(Y,0,T.size()+1)
	// 	{
	// 		cout << "X : " << X << " Y : " << Y;
	// 		cout << " " << dp[X][Y] << endl;
	// 	}
	int ans =INF;
	rep(X,0,N+1)
	{
		ans = min(dp[X][T.size()],ans);
	}

	if(ans==INF)
	{
		cout << -1 << endl;
		return(0);
	}
	cout << ans << endl;

	return (0);
}