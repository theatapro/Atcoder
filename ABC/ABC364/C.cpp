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
	ll N,X,Y;
	cin >> N >> X >> Y;
	vector<ll> A_lis(N);
	vector<ll> B_lis(N);
	rep(i,0,N)
		cin >>A_lis[i];
	rep(i,0,N)
		cin >>B_lis[i];
	ll ans=0;
	sort(A_lis.begin(),A_lis.end());
	sort(B_lis.begin(),B_lis.end());
	reverse(A_lis.begin(),A_lis.end());
	reverse(B_lis.begin(),B_lis.end());
	ll sum = 0;
	ll A_i = 0;
	ll B_i = 0;
	while(sum<=X)
	{
		if(A_i>=N)
		{
			A_i = N;
			break;
		}
		sum+=A_lis[A_i];
		A_i++;
	}
	sum = 0;
	while(sum<=Y)
	{
		if(B_i>=N)
		{
			B_i = N;
			break;
		}
		sum+=B_lis[B_i];
		B_i++;
	}
	cout << min(A_i,B_i)<<endl;
	// cout << ans <<endl;
	return(0);
}