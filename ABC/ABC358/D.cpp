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
	ll N,M;
	cin >> N>>M;
	vector<int> A(N);
	vector<int> B(M);

	multiset<ll> ms;
	ms.insert(INF+10);
	rep(i,0,N)
	{	cin >>A[i];
		ms.insert(A[i]);
	}
	rep(i,0,M)
		cin >>B[i];
	//A : 1 2 5 5 6 8 9 11
	//B : 3 5 7
	//ans : 18
	// sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	// reverse(B.begin(),B.end());
	ll ans = 0;
	rep(i,0,M)
	{
		auto Iter = ms.lower_bound(B[i]);
		// cout << *Iter << endl;
		if(*Iter==INF+10)
		{
			cout << -1 << endl;
			return(0);
		}
		else{
		ans += *Iter;
		ms.erase(ms.find(*Iter));
		}
	}
	cout << ans <<endl;
	return(0);
}