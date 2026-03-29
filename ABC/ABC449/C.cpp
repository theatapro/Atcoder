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
	int N,L,R;
	string S;
	cin >> N >> L >> R >> S;
	map<char,int> ma;
	ll ans = 0;
	rep(i,0,N-L){
		if(i==0){
			rep(j,L,R+1){
				if(j>=N) break;
				ma[S[j]]++;
			}
			ans+=ma[S[i]];
		}else{
			if(i+L-1<N) ma[S[i+L-1]]--;
			if(i+R<N)ma[S[i+R]]++;
			ans+=ma[S[i]];
		}
	}
	cout << ans<<endl;

	
	return(0);
}