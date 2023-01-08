#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	int N;
	cin >> N;
	vector<ll> lista(N);

	rep(i,0,N)
		cin >> lista.at(i);

	int Q;
	cin >> Q;
	// cout << Q<< endl;

	rep(j,0,Q)
	{
		int q;
		cin >> q;
		if(q == 1)
		{
			int k,x;
			cin >> k >> x;
			lista.at(k-1) = x;
		}
		else
		{
			int l;
			cin >> l;
			cout << lista.at(l-1) << endl;
		}
		
	}

}