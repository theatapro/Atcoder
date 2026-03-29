#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int	main(void)
{
	int N, Q;
	cin >> N >> Q;
	set<int> wait;
	int person = 1;

	rep(i,0,Q)
	{
		int in;
		cin >> in;
		if(in == 1)
		{
			wait.insert(person);
			person++;
		}
		else if(in == 2)
		{
			int x;
			cin >> x;
			wait.erase(x);
		}
		else
		{
			cout << *begin(wait) << endl;
		}
	}
	return(0);
}
