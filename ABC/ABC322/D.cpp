#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

vector<vector<char> > rotate(vector<vector<char> > matrix)
{
	int N = matrix.size();
	int layer;
	for(layer=0;layer<N/2;++layer)
	{
		int first=layer;
		int last=N-1-layer;
		for(int i=first;i<last;i++)
		{
			int j=last-i+first;
			int tmp=matrix[first][i];
			matrix[first][i]=matrix[j][first];
			matrix[j][first]=matrix[last][j];
			matrix[last][j]=matrix[i][last];
			matrix[i][last]=tmp;
		}
	}
	return(matrix);
}
bool check(vector<vector<char> > X)
{
	rep(i,3,7)
		rep(j,3,7)
			if(X[i][j]!='#')
				return(false);
	return(true);
}
void display(vector<vector<char> > X)
{
	rep(di,0,10)
		{
			rep(dj,0,10)
				cout << X[di][dj];
			cout <<endl;
		}
}
int	main(void)
{
	vector<vector<char> > poli_A(4,vector<char>(4));
	vector<vector<char> > poli_B(4,vector<char>(4));
	vector<vector<char> > poli_C(4,vector<char>(4));
	vector<vector<char> > X(10,vector<char>(10));
	rep(i,0,10)
		rep(j,0,10)
			X[i][j]='.';

	rep(i,0,4)
		rep(j,0,4)
			cin >> poli_A[i][j];
	rep(i,0,4)
		rep(j,0,4)
			cin >> poli_B[i][j];
	rep(i,0,4)
		rep(j,0,4)
			cin >> poli_C[i][j];
	vector<vector<vector<char>>> rotate_A();
	vector<vector<vector<char>>> rotate_B();
	vector<vector<vector<char>>> rotate_C();

	rep(i,0,4)
	{
		rotate_A.push_back(poli_A);
	}
	rep(A_rot,0,4)
	{
		poli_A = rotate(poli_A);
		rep(A_i,0,7)
			rep(A_j,0,7)
			{
				rep(B_rot,0,4)
				{
					poli_B = rotate(poli_B);
					rep(B_i,0,7)
						rep(B_j,0,7)
						{
							rep(C_rot,0,4)
							{
								poli_C = rotate(poli_C);
								rep(C_i,0,7)
									rep(C_j,0,7)
									{
										rep(i,C_i,C_i+4)
											rep(j,C_j,C_j+4)
											{
												if(X[i][j]=='#')
													continue;
												X[i][j] = poli_C[i-C_i][j-C_j];
											}
										rep(i,A_i,A_i+4)
											rep(j,A_j,A_j+4)
											{											
												if(X[i][j]=='#')
													continue;
												X[i][j] = poli_A[i-A_i][j-A_j];
											}
										rep(i,B_i,B_i+4)
											rep(j,B_j,B_j+4)
											{
												if(X[i][j]=='#')
													continue;
												X[i][j] = poli_B[i-B_i][j-B_j];
											}
										// if(A_rot==4 && A_i==3)																		
										if(check(X))
										{
											cout << "Yes" << endl;
											// cout << A_i << " " << A_j;
											// cout << B_i << " " << B_j;
											return(0);
										}
										rep(i,3,7)
											rep(j,3,7)
												X[i][j] = '.';
									}
							}
						}
				}
			}
	}
	cout << "No" << endl;
	return(0);
	
}
