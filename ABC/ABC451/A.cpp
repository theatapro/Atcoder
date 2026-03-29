#include <bits/stdc++.h>
// #include <atcoder/all>
// using namespace atcoder;
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const double PI = 3.141592653589793;

using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	string S;
	cin >> S;
	if(S.size()%5==0){
		cout << "Yes" <<endl;
	}else{
		cout << "No" <<endl;
	}

	return(0);
}