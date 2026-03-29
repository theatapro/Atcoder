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
	char pre_c = ' ';
	rep(i,0,N)
	{
		char c;;
		cin >> c;
		if(c==pre_c)
		{
			cout << "No" <<endl;
			return (0);
		}
		pre_c = c;
	}

	cout << "Yes" << endl;

}