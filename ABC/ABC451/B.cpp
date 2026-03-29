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
using P = pair<int, int>;


int	main(void)
{	
	int N,M;
	cin >> N >> M;
	vector<int> now(M,0);
	vector<int> next(M,0);

	rep(i,0,N){
		int A,B;
		cin >> A >> B;
		A--;B--;
		now[A]++;
		next[B]++;
	}
	rep(i,0,M){
		cout << next[i]-now[i] << endl;
	}

		return (0);
}