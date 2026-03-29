#include <bits/stdc++.h>
// #include <atcoder/all>
typedef long long ll;
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }


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
	// vector<int> vec(N);
	vector<int> memo(N,-1);
	map<int,set<int>> ma;
	rep(i,0,N){
		int A;
		cin >>A;
		// vec[i]=A;
		ma[A].insert(i);
		if(ma.count(A-1)){
			for(auto a:ma[A-1]){
				memo[a]=i;
			}
			ma.erase(A-1);
		}
	}
	int ans = 1;
	set<int> seen;
	rep(i,0,N){
		if(memo[i]==-1)
			continue;
		if(seen.count(i))
			continue;
		int cnt =1;
		seen.insert(i);
		int next = memo[i];
		while(next!=-1){
			cnt++;
			seen.insert(next);
			next = memo[next];
		}
		ans = max(ans,cnt);
	}
	cout << ans <<endl;
	return(0);
}