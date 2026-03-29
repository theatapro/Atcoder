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

	vector<int> s;
	rep(i,0,101)
	{
		int A;
		cin >> A;
		s.push_back(A);
		if(s[i]==0)
		break;
	}
	reverse(s.begin(),s.end());
	rep(i,0,s.size())
		cout << s[i] << endl;
		
	return (0);
}