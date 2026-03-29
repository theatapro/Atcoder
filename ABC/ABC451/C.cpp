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
	int Q;
	cin >> Q;
	priority_queue<int, vector<int>, greater<int>> tree;

	rep(i,0,Q){
		int q;
		int h;
		cin >> q >> h;
		if(q==1){
			tree.push(h);
		}else{
			while(tree.size()!=0 &&tree.top()<=h){
					tree.pop();
			}
		}
		cout << tree.size() <<endl;
	}

	
	return(0);
}