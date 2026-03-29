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

int	main(void)
{	
	int N;
		cin >> N;
	vector<string> s_vec(N);
	rep(i,0,N)
		cin >> s_vec[i];
	int now_max = s_vec[0].size();
	rep(i,1,N)
	{
		if(now_max<s_vec[i].size())
		{
			now_max = max(now_max,(int)s_vec[i].size());
			continue;
		}
		int now_size = s_vec[i].size();
		if(now_size<now_max)
			rep(j,0,now_max-now_size)
			{
				s_vec[i]+="*";
			}
	}
	rep(i,0,s_vec[N-1].size())
	{
		repd(j,N-1,0)
		{
			if(s_vec[j].size()>i)
				cout << s_vec[j][i];
		}
		cout << endl;
	}
	return (0);
}