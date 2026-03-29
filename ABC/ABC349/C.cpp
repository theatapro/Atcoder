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
	string S,T;
	cin >> S >> T;
	// cout << char(T[0]-('A'-'a'));
	int T_index = 0;
	int S_index = 0;
	rep(i,0,S.size())
	{
		if(T[T_index]-('A'-'a')==S[i])
		{
			T_index++;
		}
		if(T_index>=2)
		{
			S_index=i;
			break;
		}
	}
	if(T_index<2){
		cout << "No" << endl;
		return (0);
	}
	rep(i,S_index+1,S.size())
	{
		if(T[T_index]-('A'-'a')==S[i])
		{
			T_index++;
		}
	}
	if(T_index>=2&&(T_index==3||T[2]=='X'))
	{
		cout << "Yes" << endl;
		return (0);
	}
	cout << "No" << endl;
	return (0);
}