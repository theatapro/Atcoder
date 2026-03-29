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


int main(void)
{
	int N,Q;
	cin >> N >>Q;
	vector<int> A(N);
	rep(i,0,N) cin >> A[i];
	const int D = 30;
	vector<vector<int> > path(D+5,vector<int>(N));
	vector<vector<ll> > sum(D+5,vector<ll>(N));

	rep(i,0,N) {
		path[0][i]=A[i]-1;
		sum[0][i]=i+1;
	}
	rep(i,1,D){
		rep(j,0,N){
			ll x = path[i-1][j];
			path[i][j]=path[i-1][x];
			sum[i][j]=sum[i-1][j]+sum[i-1][x];
		}
	}

	rep(i,0,Q){
		int T,B;
		cin >> T >> B;
		B--;
		ll ans = 0;
		rep(j,0,D){
			if(T>>j&1){
				ans += sum[j][B];
				B = path[j][B];
			}
		}
		cout << ans <<endl;
	}
	return(0);
}