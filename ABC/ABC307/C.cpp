#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

int main(void)
{
	int H_A,W_A;
	cin >> H_A >> W_A;
	vector<vector<char> > A_vec(30+H_A,vector<char>(30+W_A,'.'));

	rep(i,15,15+H_A)
		rep(j,15,15+W_A)
			cin >> A_vec[i][j];

	int H_B,W_B;
	cin >> H_B >> W_B;
	vector<vector<char> > B_vec(H_B,vector<char>(W_B,'.'));
	rep(i,0,H_B)
		rep(j,0,W_B)
			cin >> B_vec[i][j];
	
	return(0);
}
