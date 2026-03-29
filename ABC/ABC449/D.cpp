#include <bits/stdc++.h>
// #include <atcoder/all>
typedef long long ll;
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }


const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
// using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()

//x>=0,y>=0
ll even_sum(ll x,ll y){
	//y<=x の時、1+y
	if(y<=x) return(1+y);
	//y>x の時、x + (y-x)/2
	if(y>x) return(x+1+(y-x)/2);
	return(0);
}
ll odd_sum(ll x,ll y){
	//y<=x の時、0
	if(y<=x) return(0);
	//y>x の時、(y-(x-1))/2
	if(y>x) return((y-(x-1))/2);
	return(0);

}

int main(void)
{
	ll L,R,D,U;
	cin >> L >> R >> D >> U;
	ll ans = 0;
	rep(x,L,R+1){
		if(x%2==0){
			if(D*U<=0) ans += even_sum(abs(x),abs(D))+even_sum(abs(x),abs(U))-1;
			else{
				if(U>0&&D>0) ans += even_sum(abs(x),abs(U))-even_sum(abs(x),abs(D-1));
				else ans += even_sum(abs(x),abs(D))-even_sum(abs(x),abs(U+1));
			}
			// cout << x << " " << ans <<endl;
		}
		else{
			if(D*U<=0) ans += odd_sum(abs(x),abs(D))+odd_sum(abs(x),abs(U));
			else{
				if(U>0&&D>0) ans += odd_sum(abs(x),abs(U))-odd_sum(abs(x),abs(D-1));
				else ans += odd_sum(abs(x),abs(D))-odd_sum(abs(x),abs(U+1));
			}
			// cout << x << " " << ans <<endl;
		}
	}
	cout << ans <<endl;
	return(0);
}