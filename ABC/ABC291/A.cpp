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
	rep(i, 0, S.size())
	{
		if ('A' <= S[i] && S[i] <= 'Z')
		{
			cout << i + 1<< endl;;
		return(0);
		}
	}
	return (0);

}