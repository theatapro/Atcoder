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
	int N;
	cin >> N;
	vector<vector<int> > A(N,vector<int>(N));
	vector<vector<int> > B(N,vector<int>(N));


	rep(i,0,N)
		rep(j,0,N)
			cin >> A[i][j];

	rep(i,0,N)
		rep(j,0,N)
			cin >> B[i][j];
			
	vector<vector<int> > new_A(N,vector<int>(N));
	new_A = A;
	for(int c = 1; c <=4; c++)
	{
		// cout <<" #####" << endl;
		bool check = true;
		rep(i,0,N)
			rep(j,0,N)
			{
				if(new_A[i][j]==1)
				{
					if(B[i][j]!=1)
						check = false;
				}
			}
		if(check)
		{
			cout << "Yes" << endl;
			return(0);
		}
		rep(i,0,N)
			rep(j,0,N)
				new_A[i][j] = A[N-1-j][i];
		A=new_A;
		// rep(i,0,N)
		// {
		// 	rep(j,0,N)
		// 		cout << new_A[i][j] << " ";
		// 	cout << endl;
		// }
		// cout <<" #####" << endl;
	}
	cout << "No" << endl;
		

	

	return(0);
	
}