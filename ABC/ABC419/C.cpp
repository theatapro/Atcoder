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
	int N;
	cin >> N;
	vector<P> pos(N);
	ll min_R=INF+10;
	ll min_C=INF+10;
	ll max_R=-1;
	ll max_C=-1;

	rep(i,0,N){
		ll R,C;
		cin >> R >> C;
		pos[i]=make_pair(R,C);
		min_R = min(min_R,R);
		min_C = min(min_C,C);
		max_R = max(max_R,R);
		max_C = max(max_C,C);
	}
	// sum_R=1e14;
	// N=1;
	ll R_ave = round(double(max_R+min_R)/2);
	ll C_ave = round(double(max_C+min_C)/2);
	// cout << R_ave << " " << C_ave <<endl;

	ll max_dis_R=-1;
	ll max_dis_C=-1;
	ll max_pos_R=0;
	ll max_pos_C=0;

	rep(i,0,N){
		max_dis_R = max(max_dis_R,abs(R_ave-pos[i].first));
		max_dis_C = max(max_dis_C,abs(C_ave-pos[i].second));
		if(max_dis_R==abs(R_ave-pos[i].first))
			max_pos_R=i;
		if(max_dis_C==abs(C_ave-pos[i].second))
			max_pos_C=i;
	}
	ll R1 = max(abs(pos[max_pos_R].first-R_ave),abs(pos[max_pos_R].second-C_ave));
	ll C1 = max(abs(pos[max_pos_C].first-R_ave),abs(pos[max_pos_C].second-C_ave));
	
	ll ans = max(R1,C1);
	cout << ans <<endl;
	return(0);
}