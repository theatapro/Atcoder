#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	int N;
	string S;
	cin >> N >> S;
	// bool ans = false;
	rep(i,0,S.size()-2)
	{
		if(S[i]=='A'&&S[i+1]=='B'&&S[i+2]=='C')
		{
			cout << i+1 << endl;
			return(0);
		}
	}
	cout << "-1" << endl;
	return(0);
}