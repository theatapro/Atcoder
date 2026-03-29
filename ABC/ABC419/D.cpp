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


int main(void)
{
	int N,M;
	cin >> N >>M;
	string S,T;
	cin >> S >>T;
	vector<int> imos(N+10);
	rep(i,0,M)
	{
		int l,r;
		cin >> l>>r;l--;r--;
		imos[l]+=1;
		imos[r+1]-=1;
	}

	vector<int> wa(N+10);
	wa[0]=imos[0];
	rep(i,1,N){
		wa[i]+=wa[i-1]+imos[i];
	}
	rep(i,0,N){
		if(wa[i]%2==1)
			cout<<T[i];
		else{
			cout << S[i];
		}
	}
	cout <<endl;
}