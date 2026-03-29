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

ll dp[3][300050];

int main(void)
{
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> B(N);
	vector<int> C(N);

	rep(i,0,N){
		cin >> A[i];
		if(i==0) dp[0][i]=A[i];
		else dp[0][i]=A[i]+dp[0][i-1];
	}
	rep(i,0,N){
		cin >> B[i];
		if(i>0) dp[1][i] = max(dp[0][i-1],dp[1][i-1])+B[i];
		else dp[1][i] = -LINF;
	}
	rep(i,0,N){
		cin >> C[i];
		if(i>1) dp[2][i] = max(dp[1][i-1],dp[2][i-1])+C[i];
		else dp[2][i] = -LINF;
	}

	cout << dp[2][N-1] <<endl;
}