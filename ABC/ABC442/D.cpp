#include <bits/stdc++.h>
#include <atcoder/all>
typedef long long ll;
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }


const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()


int main(void)
{
	ll N,Q;
	cin >> N >> Q;
	vector<ll> A(N);
	fenwick_tree<long long> fw(N);
	rep(i,0,N){
		cin >> A[i];
		fw.add(i,A[i]);
	}
	rep(i,0,Q){
		int a;
		cin >> a;
		if(a==1){
			int x;
			cin >> x;
			x--;
			ll x_v = A[x];
			ll nx_v = A[x+1];
			fw.add(x,nx_v-x_v);
			fw.add(x+1,-nx_v+x_v);
			A[x+1]=x_v;
			A[x]=nx_v;
		}
		else{
			int l,r;
			cin >>l>>r;
			l--;
			// r++;
			// fw.sum(l,r);
			cout <<  fw.sum(l,r) << endl;
		}
	}

	return(0);
}