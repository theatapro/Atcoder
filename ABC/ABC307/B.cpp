#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

bool judge(string S)
{
	int N = S.size();
	rep(i,0,N/2)
	{
		if(S[i]!=S[N-i-1])
			return(false);
	}
	return(true);
}
int	main(void)
{
	int N;
	cin >> N;
	vector<string> S(N);
	rep(i,0,N)
		cin >> S[i];
	rep(i,0,N)
	{
		rep(j,0,N)
		{
			if(i==j)
				continue;
			string wa = S[i]+S[j];
			bool ans = judge(wa);
			if(ans)
			{
				cout << "Yes" << endl;
				return(0);
			}
		}
	}
	cout << "No" << endl;
	return(0);
	
}