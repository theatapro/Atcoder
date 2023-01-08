#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	string S, T;

	cin >> S >> T;

	if(S.size() > T.size())
	{
		cout << "No" <<endl;
		return (0);
	}

	int check = 0;
	rep(i, 0, S.size())
	{
		if(S.at(i) == T.at(i))
			check++;
	}
	if(check == S.size())
	{
		cout << "Yes" <<endl;
		return (0);
	}
	else
		cout << "No" <<endl;
	return (0);
}