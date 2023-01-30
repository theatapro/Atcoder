#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	string S;
	cin >> S;
    stack<set<char> > Y;
	set<char> X;
	
	Y.push({});
    rep(i, 0, S.size())
    {
		if ('a' <= S[i] && S[i] <= 'z')
		{
			if (X.count(S[i]))
			{
				cout << "No" << endl;
				return (0);
			}
			X.insert(S[i]);
			Y.top().insert(S[i]);
		}
        else if (S[i] == '(')
		{
			Y.push({});
		}
		else
		{
			for (auto c: Y.top())	
				X.erase(c);
			Y.pop();
		}
    }
	cout << "Yes" << endl;
	return(0);
}
