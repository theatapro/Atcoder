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
using P = pair<int, int>;

int cnt_over(vector<int> vec,int T)
{
	int ret=0;
	rep(i,0,vec.size())
	{
		if(vec[i]>=T)
			ret++;
	}
	return(ret);
}
int	main(void)
{	
	int N,T,P;
	cin >> N >>T >>P;
	vector<int> vec(N);
	rep(i,0,N)
		cin >> vec[i];
	int day = 0;
	if(cnt_over(vec,T)>=P)
	{
		cout << 0 << endl;
		return(0);
	}
	else{
		while(1)
		{
		day++;
		rep(i,0,vec.size())
		{
			vec[i]++;
		}
		if(cnt_over(vec,T)>=P)
		{
			cout << day << endl;
			return(0);
		}
		}
	}
	return (0);
}