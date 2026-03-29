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
	string S;
	cin >> S;
	int f_B = -1;
	int s_B = -1;
	int pos_K= -1;
	int f_R = -1;
	int s_R = -1;

	rep(i,0,S.size())
	{
		if(S[i] == 'B' && f_B == -1)
			f_B = i;
		else if(S[i] == 'B' && f_B != -1)
			s_B = i;
		else if(S[i] == 'R' && f_R == -1)
			f_R = i;
		else if(S[i] == 'R' && f_R != -1)
			s_R = i;
		if(S[i]== 'K')
			pos_K = i;
	}
	if((f_B%2==0&&s_B%2==0) ||((f_B%2==1&&s_B%2==1)))
	{
		cout << "No" << endl;
		return(0);
	}
	if(f_R>pos_K || pos_K > s_R)
	{
		cout << "No" << endl;
		return(0);
	}
	cout << "Yes" << endl;


			
	return(0);
	
}