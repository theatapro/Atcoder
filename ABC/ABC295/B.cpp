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
	int R,C;
	cin >> R >> C;
	vector<vector<char> > vec(R,vector<char>(C));
	vector<vector<bool> > del(R,vector<bool>(C));
	
	rep(i,0,R)
		rep(j,0,C)
			cin >> vec[i][j];
	rep(i,0,R)
	{
		rep(j,0,C)
		{
			if(vec[i][j]>='1' && vec[i][j]<='9')
			{
				del[i][j] = true;
				int dis = vec[i][j]-'1'+1;
				rep(tate,i-dis,i+dis+1)
				{
					rep(yoko,j-(dis-abs(i-tate)),j+(dis-abs(i-tate))+1)
					{
						if(tate<0||tate>=R||yoko<0||yoko>=C)
							continue;
						del[tate][yoko] = true;
						// cout << tate << " "<<yoko << endl;
					}
				}

			}
		}
	}
	rep(i,0,R)
	{
		rep(j,0,C)
		{
			if(del[i][j])
				cout << '.';
			else
				cout << vec[i][j];
		}
		cout << endl;
	}
			
	return(0);
	
}