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
	int H,W,Q;
	cin >> H >> W >> Q;
	int now_H = H;
	int now_W = W;

	rep(i,0,Q){
		int x,dir;
		cin >> x >> dir;
		if(x==1){
			cout << dir*now_W <<endl;
			now_H-=dir;
		}
		else{
			cout << dir*now_H <<endl;
			now_W-=dir;	
		}
	}

		return (0);
}