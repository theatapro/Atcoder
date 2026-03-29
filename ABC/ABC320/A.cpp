#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	string S;
	cin >> S;
	bool ans = true;
	rep(i,0,S.size()-1)
		if(S[i]<=S[i+1])
			ans = false;
	if(ans)
	{
		cout << "Yes" << endl;
		return (0);
	}
	cout << "No" << endl;
	return(0);
}