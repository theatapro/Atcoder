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
const int DIV = 1e8;

using namespace std;
using P = pair<ll, ll>;

int	main(void)
{	
	ll N,K,X;
	cin >> N>>K>>X;
	vector<ll> A(N);
	rep(i,0,N){
		cin >> A[i];
	}
	sort(A.begin(),A.end());
	reverse(A.begin(),A.end());
	ll W = N - K;
	ll sum = 0;
	ll ans = W;
	W--;
	rep(i,0,N){
		if(i>W){
			sum+=A[i];
			ans++;
			if(sum>=X) break;
		}
	}
	if(sum<X) cout << "-1"<<endl;
	else cout << ans <<endl;
	return(0);
}