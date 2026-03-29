#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

bool check(vector<vector<char>> S,string &R,string &C)
{
	string make_R="";
	string make_C="";
	rep(i,0,S.size())
	{
		rep(j,0,S[i].size())
			if(S[i][j] != 0)
				make_R += S[i][j];
	}
	rep(i,0,S.size())
	{
		rep(j,0,S[i].size())
			if(S[j][i] != 0)
				make_C += S[j][i];
	}
	if(make_R==R && make_C==C)
		return(true);
	return(false);
}
int	main(void)
{
	int N;
	cin >> N;
	string R,C;
	cin >> R >>C;
	vector<vector<char>> S(N,vector<char>(N));

	rep(l_1,0,N)
		rep(l_2,0,N)
			rep(l_3,0,N)
				rep(l_4,0,N)
					rep(l_5,0,N)
						rep(u_1,0,N)
							rep(u_2,0,N)
								rep(u_3,0,N)
									rep(u_4,0,N)
										rep(u_5,0,N)
										{
											string make_R;
											string make_C;
											S[0][l_1] = R[0];
											S[1][l_2] = R[1];
											S[2][l_3] = R[2];
											S[3][l_4] = R[3];
											S[4][l_5] = R[4];
											S[u_1][0] = C[0];
											S[u_2][1] = C[1];
											S[u_3][2] = C[2];
											S[u_4][3] = C[3];
											S[u_5][4] = C[4];
											if(check(S,R,C))
											{
												cout << "Yes" << endl;
												return (0);
											}
											
										}

	return(0);	
}
