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
	string S;
	cin >> N >> S;
	int goal = (N+1) / 2;
	int A_cnt = 0;
	int T_cnt = 0;

	rep(i,0,S.size())
	{
		if(S[i]== 'T')
			T_cnt++;
		else
			A_cnt++;
		if(T_cnt == goal)
		{
			cout << "T" <<endl;
			return(0);
		}
		else if(A_cnt == goal)
		{
			cout << "A" <<endl;
			return(0);
		}
	}
	return(0);
}