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
	vector<ll> A(N);
	ll sum = 0;
	rep(i,0,N)
	{
		cin >> A[i];
		sum+=A[i];
	}
	sum *= N - 1;
	sort(A.begin(),A.end());
	ll over_cnt = 0;
	int x = 1;
	for(int l=0;l<=N-2;l++)
	{
		for(int r=l+1;r<=N-1;r++)
		{
			if(A[l]+A[r]>=DIV)
			{
				over_cnt+=r-l;
				x = r;
				break;
			}
		}
	}
	cout << sum - (DIV*over_cnt) << endl;
	return(0);
}