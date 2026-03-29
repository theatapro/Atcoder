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

int main(void)
{
	int N;
	cin >> N;
	vector<vector<vector<int> > > xyz(N+10, vector<vector<int> >(N+10,vector<int>(N+10)));
	rep(i,1,N+1)rep(j,1,N+1)rep(k,1,N+1)
		cin >> xyz[i][j][k];
	vector<vector<vector<int> > > sum(N+10, vector<vector<int> >(N+10,vector<int>(N+10)));

	rep(x,1,N+1)
	{
		rep(y,1,N+1)rep(z,1,N+1)
			sum[x][y][z]=sum[x][y][z-1]+xyz[x][y][z];
		rep(y,1,N+1)rep(z,1,N+1)
			sum[x][y][z]=sum[x][y-1][z]+sum[x][y][z];
	}
	int Q;
	cin >> Q;
	rep(i,0,Q)
	{
		int lx,rx,ly,ry,lz,rz;
		cin >>lx>>rx>>ly>>ry>>lz>>rz;
		ll ans = 0;
		rep(x,lx,rx+1)
			ans += sum[x][ry][rz]+sum[x][ly-1][lz-1]-sum[x][ly-1][rz]-sum[x][ry][lz-1];
		cout <<ans<<endl;
	}
	return(0);
}