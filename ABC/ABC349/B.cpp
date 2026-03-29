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
	string S;
	cin >> S;
	vector<int> vec(26,0);
	rep(i,0,S.size())
	{
		int c = S[i]-'a';
		vec[c]+=1;
	}
	// rep(i,0,26)
	// 	cout << vec[i] << " ";
	rep(i,0,26)
	{
		int cnt = vec[i];
		if(cnt==0)
			continue;
		int val = 0;
		rep(j,0,26)
		{
			if(cnt==vec[j])
				val++;
		}
		if(val!=0&&val!=2)
		{
			cout << "No" << endl;
			return (0);
		}
	}

	cout << "Yes" << endl;
	return (0);
}