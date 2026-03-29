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
	int Q;
	cin >> Q;
	vector<int> x_vec;
	rep(i,0,Q){
		int a;
		cin >> a;
		if(a==1){
			int x;
			cin >> x;
			x_vec.push_back(x);
		}else{
			int ans = 0;
			sort(x_vec.begin(),x_vec.end());
			rep(j,0,x_vec.size()){
				if(x_vec[j]!=0){
					ans = x_vec[j];
					cout << ans <<endl;
					x_vec[j]=0;
					break;
				}
			}
		}
	}
	return (0);
}