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
	vector<vector<int> > G(3);
	int N,M,L;
	cin >> N;
	rep(i,0,N)
	{
		int A;
		cin >> A;
		G[0].push_back(A);
	}
	cin >> M;
	rep(i,0,M)
	{
		int B;
		cin >> B;
		G[1].push_back(B);
	}
	cin >> L;
	rep(i,0,L)
	{
		int C;
		cin >> C;
		G[2].push_back(C);
	}
	set<ll> s;
	rep(i,0,G[0].size())
		rep(j,0,G[1].size())
			rep(k,0,G[2].size())
			{
				ll sum = G[0][i]+G[1][j]+G[2][k];
				s.insert(sum);
			}
	int Q;
	cin >> Q;
	rep(i,0,Q)
	{
		int X;
		cin >> X;
		if(s.count(X))
		{
			cout << "Yes" << endl;
			// return (0);
		}else{
			cout << "No" << endl;
			// return (0);
		}
	}

	return (0);
}