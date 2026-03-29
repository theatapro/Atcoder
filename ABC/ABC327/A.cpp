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
	cin>> N >> S;
	rep(i,0,N-1)
	{
		if(S[i]=='a' && S[i+1]=='b')
		{
			cout << "Yes" << endl;
			return (0);
		}
		if(S[i]=='b' && S[i+1]=='a')
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}