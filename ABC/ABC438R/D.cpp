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
// using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()

ll dp[4][300050];

int main(void)
{
	ll N;
	cin >> N;
	rep(i,0,N)
	{
		int a;
		cin >> a;
		if(i==0) dp[1][i] = a;
		else dp[1][i]=dp[1][i-1]+a;
	}
	dp[1][N-2]=-LINF;
	dp[1][N-1]=-LINF;

	vector<ll> B(N);
	vector<ll> C(N);
	rep(i,0,N)
		cin >> B[i];
	rep(i,0,N)
		cin >> C[i];
	rep(i,1,N-1){
		dp[2][i]=max(dp[1][i-1],dp[2][i-1])+B[i];
	}
	rep(i,2,N){
		dp[3][i]=max(dp[2][i-1],dp[3][i-1])+C[i];
	}

	cout <<dp[3][N-1]<<endl;

	// int x = 0;
	// int y = 0;
	// int now = 3;
	// repd(i,N-1,-1+now){
	// 	if(now == 1) break;
	// 	if(now == 3 && (dp[now][i] == dp[now-1][i-1]+C[i] || i==2)){
	// 		y=i;
	// 		now--;
	// 	}
	// 	else if(now == 2 && (dp[now][i] == dp[now-1][i-1]+B[i] || i==1)){
	// 		x=i;
	// 		now--;
	// 	}
	// }
	// cout << x << " " << y <<endl;
}