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
	cin >> N >> Q;
	vector<int> person(N);
	rep(i,0,N) cin >> person[i];

	vector<vector<int> > path(33,vector<int>(N));
	vector<vector<ll> > sum(33,vector<ll>(N));

	rep(i,0,N){
		path[0][i] = person[i] - 1;
		sum[0][i] = i+1;
	}
	rep(i,1,33){
		rep(j,0,N){
			path[i][j] = path[i-1][path[i-1][j]];
			sum[i][j] = sum[i-1][j] + sum[i-1][path[i-1][j]];
		}
	}

	rep(i,0,Q){
		ll ans = 0;
		ll T,B;
		cin >> T >> B;
		B--;
		rep(j,0,33){
			if(T>>j&1){
				ans += sum[j][B];
				B = path[j][B];
			}
		}
		cout <<ans << endl;
	}
	return(0);
}