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
	int N,M;
	cin >> N >> M;
	vector<int> A(N);
	vector<int> B(M);
	rep(i,0,N)
		cin >> A[i];
	rep(i,0,M)
		cin >> B[i];

	int ind_B = 0;
	rep(i,0,N)
	{
		rep(j,ind_B,M)
		{
			if(A[i]<B[j])
			{
				cout << i+j+1 << " ";
				ind_B = j;
				break;
			}
			if(j==M-1)
			{
				cout << i+j+2 << " ";
				ind_B = j;
			}
			
		}
	}
	cout << endl;
	int ind_A = 0;
	rep(i,0,M)
	{
		rep(j,ind_A,N)
		{
			if(B[i]<A[j])
			{
				cout << i+j+1 << " ";
				ind_A = j;
				break;
			}
			if(j==N-1)
			{
				cout << i+j+2 << " ";
				ind_A = j;
			}
		}
	}
	cout << endl;
}
