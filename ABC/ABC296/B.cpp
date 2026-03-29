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
	vector<vector<char> > vec(8,vector<char>(8));
	int ans_num = 8;
	char ans_char = 'a';
	rep(i,0,8)
		rep(j,0,8)
			cin >> vec[i][j];
	rep(i,0,8)
	{
		rep(j,0,8)
		{
			if(vec[i][j] == '*')
			{
				cout << ans_char << ans_num << endl;
				return(0);

			}
			ans_char++;
		}
		ans_char = 'a';
		ans_num--;
	}

			
	return(0);
	
}