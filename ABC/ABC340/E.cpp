#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

template <typename T>
bool chmax(T &a, const T& b) {
  if (a < b) {
    a = b;  // aをbで更新
    return true;
  }
  return false;
}

int	main(void)
{
	int N;
	cin >> N;
	vector<vector<double> > dp(5010,vector<double>(5010,-INF));
	vector<vector<double> > mother(5010,vector<double>(5010));
	vector<vector<double> > child(5010,vector<double>(5010));
	vector<double> alpha(5010);

	//dp[u][v]:u-1まで見て、v個選んだ時の最大値R
	vector<int> P_vec(N+1);
	rep(i,1,N+1)
		cin >> P_vec[i];
	rep(i,1,N+1)
		rep(j,1,i+1)
		{
			double kari_mother = mother[i][j-1] + (1-pow(0.9,j))/0.1;
			double kari_child = child[i][j-1]*0.9 + P_vec[i];
			alpha[j] = 1200/sqrt(j);
			// i 番目を選ぶ場合
            if(chmax(dp[i][j], (kari_child/kari_mother) - alpha[j]))
			{
				mother[i][j] = mother[i][j-1] + (1-pow(0.9,j))/0.1;
				child[i][j] = child[i][j-1]*0.9 + P_vec[i];
				cout << "i:" << i <<" j:" << j <<endl;
				cout << "mother:" << mother[i][j] <<" child:" << child[i][j] <<endl;
			}

            // i 番目を選ばない場合
            chmax(dp[i][j], dp[i][j-1]);
			cout << "rate:" << dp[i][j] << endl;
		}
	double ans = 0;
	rep(i,0,5010)
	{
		ans = max(ans,dp[N][i]);
	}
	cout << ans;
	return(0);	
}
