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

P keta(ll N)
{
	int ret=1;
	ll key = 9;
	ll sum =10;
	ll loop = 0;
	ll pre_sum=0;
	while(N>sum)
	{	
		loop++;
		if(loop%2==0)
			key*=10;
		pre_sum = sum;
		sum+=key;
		ret++;
	}
	return(make_pair(ret,N-pre_sum));
}

int main(void)
{
	ll N;
	cin >> N;
	cout <<keta(N).first <<  " "<<keta(N).second<<endl;

	return(0);
}