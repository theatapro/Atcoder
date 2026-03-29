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
	vector<P> S(N);
	ll min_sum=0;
	ll max_sum=0;
	vector<P> allow(N);

	rep(i,0,N)
	{
		cin >> S[i].first >> S[i].second;
		min_sum+=S[i].first;
		max_sum+=S[i].second;
	}
	if(min_sum<=0 && max_sum>=0)
	{
		cout << "Yes" << endl;
		for(int i = N-1;i>=0;i--)
		{
			if(i==N-1){
				allow[i].first=S[i].first;
				allow[i].second=S[i].second;
			}
			else{
				
			}

		}
		return (0);
	}
	else
	{
		cout << "No" << endl;
		return (0);
	}

	return(0);
}