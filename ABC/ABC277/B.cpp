#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int	main(void)
{
	int N;
	cin >> N;
	vector<string> S(N);

	rep(i, 0, N)
		cin >> S[i];

	rep(i,0,N-1)
		rep(j,i+1,N)
			if(S[i] == S[j])
			{
				cout << "No" << endl;
				return(0);
			}

	rep(i,0,N)
	{
		if(S[i][0] != 'H' && S[i][0] != 'D' && S[i][0] != 'C' && S[i][0] != 'S')
		{
			cout << "No" << endl;
			return(0);
		}
	}

	rep(i,0,N)
	{
		if(S[i][1] != 'A' && S[i][1] != 'T' && S[i][1] != 'J' && S[i][1] != 'Q'&& S[i][1] != 'K'
		&& (S[i][1] < 50 || S[i][1] > 57))
		{
			cout << "No" << endl;
			return(0);
		}
	}

	cout << "Yes" << endl;
}