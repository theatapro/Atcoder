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
using P = pair<ll, ll>;

int main(void)
{
int N;
string S;
cin >> N >> S;
vector<ll> counter(2*N+1,0);
int D = 0;
ll sum = 0;
ll ans = 0;
counter[N+D]++;
rep(i,0,N){
	if(S[i]=='A'){
		sum += counter[N+D];
		D++;
	}
	if(S[i]=='B'){
		D--;
		sum -= counter[N+D];
	}
	counter[N+D]++;
 	ans += sum;

}
	if(ans<0)
		cout << 0 << endl;
	else
		cout << ans << endl;
return(0);
}