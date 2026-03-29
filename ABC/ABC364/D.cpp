#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }


typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()

int main(void)
{
	int N,Q;
	cin >> N >> Q;
	vector<int> a(N);
	rep(i,0,N)
		cin >> a[i];
	rep(i,0,Q)
	{
		int b, k;
		cin >> b>>k;
		auto Iter1 = lower_bound(ALL(a), b);
		int x = Iter1 - a.begin();
		//0~x,x~N-1
		cin >> l >>r;
		seg.prod(x,);

	}
	return(0);
}