#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int	main(void)
{
	int N,M;
	cin >> N >> M;
	vector<vector<int> > G(N);

	rep(i, 0, M)
	{
		int A,B;
		cin >> A >> B;
		A--;
		B--;
		G[A].push_back(B);
		G[B].push_back(A);
	}
	rep(i,0,N)
		sort(G[i].begin(), G[i].end());
	rep(i,0,N)
	{
		cout << G[i].size() << " ";
		if(G[i].size() == 0)
			cout << endl;
		rep(j,0,G[i].size())
		{
				cout << G[i][j] + 1<< " ";
				if(j == G[i].size() - 1)
					cout << endl;
		}

	}

}