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
// using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()

// a
// a A
// aA Aa
// aAAa AaaA
// aAAaAaaA AaaAaAAa
// aAAaAaaA AaaAaAAa AaaAaAAa aAAaAaaA
// 11,101,110,1001,1010
// 0,3,5,6,9,10,12,15
// 2^(2*[i-1])
// 2,3,5,8,9,12,14,15,17,20,22,23,26,27,29,32

char change(char c){
	if('a'<=c && c<='z')
		c += 'A'-'a';
	else
		c += 'a'- 'A';
	return(c);
}
ll bit_cnt(ll x){
	int cnt=0;
	if(x==0)
		return(0);
	for(int i = 60;i>=0;i--){
		if(x>=ll(pow(2,i)))
		{
			cnt++;
			x-=ll(pow(2,i));
			if(x==0)
				break;
		}
	}
	return(cnt);
}
int main(void)
{
	string S;
	int Q;
	cin >> S >> Q;
	rep(i,0,Q)
	{
		ll K;
		cin >> K;
		K--;
		ll bl = (K/S.size());
		cout <<__popcount(bl)<<endl;
		if(bit_cnt(bl)%2==0)
			cout << S[K%S.size()] << " ";
		else
			cout << change(S[K%S.size()]) << " ";
		// cout << S[K%S.size()] <<endl;
	}
	// cout << change('A') << change('a') <<endl;
	return(0);
}