#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;


int	main(void)
{	
	int N;
	cin >> N;
	vector<string> A(N);
	vector<string> B(N);

	rep(i,0,N)
		cin >> A[i];
	rep(i,0,N)
		cin >> B[i];
	rep(i,0,N)rep(j,0,N)
	{
		if(A[i][j]!=B[i][j])
		{
			cout << i+1 << " " << j+1 <<endl;
			return(0);
		}
	}
	return (0);
}