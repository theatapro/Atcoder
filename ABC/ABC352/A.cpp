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
	int N,X,Y,Z;
	cin >> N >> X >>Y >> Z;
	if(X>=Y)
	{
		while(X>Y)
		{
			if(X==Z)
			{
				cout << "Yes" << endl;
				return (0);
			}
			X--;
		}
	}
	else
	{
		while(X<=Y)
		{
			if(X==Z)
			{
				cout << "Yes" << endl;
				return (0);
			}
			X++;
		}
	}
	cout << "No" << endl;
	return (0);
}