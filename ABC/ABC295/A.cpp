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
	int N;
	cin >> N;
	rep(i,0,N)
	{
		string s;
		cin >> s;
		if(s=="and"|| s=="not"||s==
		 "that"|| s=="the"|| s=="you")
		{
			cout << "Yes" << endl;
			return(0);
		}
	}

	cout << "No"<< endl;

}