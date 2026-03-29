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
	cin >> N >>S;
	bool flag = false;
	rep(i,0,N)
	{
		if(S[i]== 'x')
		{
			cout << "No" << endl;
			return(0);
		}
		if(S[i] == 'o')
			flag = true;
	}
	if(flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}