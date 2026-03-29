#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{
	int N,X;
	cin >> N >> X;
	vector<int> list(N);
	rep(i,0,N-1)
		cin >> list[i];
	rep(i,0,101)
	{
		list[N-1] = i;
		vector<int> nlist;
		nlist = list;
		sort(nlist.begin(),nlist.end());
		int sum = 0;
		rep(j,1,N-1)
			sum += nlist[j];
		// cout << sum ;
		if(sum>=X)
		{
			cout << i << endl;
			return(0);
		}
	}
	cout << -1 <<endl;
	return(0);
}