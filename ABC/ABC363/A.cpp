#include <bits/stdc++.h>
// #include <atcoder/all>
// using namespace atcoder;
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

long long pow_long(long long a, long long b)
{
	long long ret = 1;
	for(long long i = 0;i<b;i++)
		ret*=a;
	return(ret);
}

int	main(void)
{	
	int R;
	cin >> R;
	if(R<100)
	{
		cout<< 100-R<<endl;
		return(0);
	}
	else if(R<200)
	{
		cout<< 200-R<<endl;
		return(0);
	}
	else if(R<300)
	{
		cout<< 300-R<<endl;
		return(0);
	}
	else
	{
		cout<< 400-R<<endl;
		return(0);
	}
	return(0);
}