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
	int N,M;
	cin >> N >>M;
	vector<vector<char> > masu(N,vector<char>(M));
	// vector<bool> day(D);
	rep(i,0,N)
		rep(j,0,M)
			cin >> masu[i][j];
	rep(i,0,N-9+1)
	{
		rep(j,0,M-9+1)
		{
			bool flag = true;
			rep(ni,i,i+3)
				rep(nj,j,j+3)
					if (masu[ni][nj]=='.')
						flag = false;
			rep(ni,i+6,i+9)
				rep(nj,j+6,j+9)
					if (masu[ni][nj]=='.')
						flag = false;
			rep(nj,j,j+4)
				if(masu[i+3][nj]=='#')
					flag = false;
			rep(ni,i,i+3)
				if(masu[ni][j+3]=='#')
					flag = false;

			rep(nj,j+5,j+9)
				if(masu[i+5][nj]=='#')
					flag = false;
			rep(ni,i+6,i+9)
				if(masu[ni][j+5]=='#')
					flag = false;
			if(flag)
				cout << i+1 << " " << j+1 <<endl;
		}

	}


	return(0);
}