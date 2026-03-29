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

int	main(void)
{	
	int R;
	cin >> R;
	vector<string> lis(R); 
	bool ans = false;
	rep(i,0,R)
	{
		cin >> lis[i];
		if(i>0&&i!=R-1)
		{
			if((lis[i-1]==lis[i])&&(lis[i]=="sweet"))
				ans =true;
		}
	}
	if(ans)
	{
		cout << "No" << endl;
		return (0);
	}
	else
		cout << "Yes" << endl;
	return(0);
}