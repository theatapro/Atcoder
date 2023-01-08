#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int	main(void)
{
	string S,T;
	cin >> S >> T;

	if(S.size() < T.size())
	{
		cout << "No" <<endl;
		return(0);
	}
	int len = T.size();

	rep(i,0,S.size() - len + 1)
	{
		int cnt = 0;
		rep(j,0,len)
		{
			if(S.at(i + j) == T.at(j))
				cnt++;
		}
		if(cnt == len)
		{
			cout << "Yes" <<endl;
			return(0);
		}
	}
	cout << "No" <<endl;
	return(0);
}