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
	set<int> se;
	rep(i,0,M)
		se.insert(i+1);
	rep(i,0,N){
		int L;
		cin >> L;
		bool found = false;
		rep(j,0,L){
			int X;
			cin >> X;
			if(se.count(X)&&!found){ cout << X <<endl;found=true;se.erase(X);}
		}
		if(!found)
			cout << 0 <<endl;
	}
		return (0);
}