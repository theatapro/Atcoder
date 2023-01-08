#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;

int main(void)
{
	string S;
	cin >> S;
	ll ans = S.size();
	rep(i, 0, S.size()-1)
	{
		if(S.at(i) == '0' && S.at(i+1) == '0')
		{
			ans--;
			i++;
		}

	}

	cout << ans << endl;

}
