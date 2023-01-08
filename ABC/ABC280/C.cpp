#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int main(void)
{
	string S,T;
	cin >> S >> T;
	int ans;

	rep(i, 0, S.size())
	{
		if(S[i] != T[i])
		{
			ans = i;
			cout << ans + 1<< endl;
			return(0);
		}
	}
	cout << S.size()+1 << endl;

}
