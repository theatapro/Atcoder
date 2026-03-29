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
	int N,M;
	cin >> N >> M;
	vector<int> goal(M);
	vector<int> now(M);

	rep(i,0,M)
		cin >> goal[i];
	rep(i,0,N)
		rep(j,0,M)
		{
			int X;
			cin >> X;
			now[j]+=X;
		}
	rep(i,0,M)
	{
		if(now[i]<goal[i])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
	// int N,M;
	// set<int> A;
	// set<int> B;
	// vector<int> C;
	// cin >> N >> M;
	// rep(i,0,N)
	// {
	// 	int a;
	// 	cin >> a;
	// 	C.push_back(a);
	// 	A.insert(a);
	// }
	// rep(i,0,M)
	// {
	// 	int b;
	// 	cin >> b;
	// 	C.push_back(b);
	// 	B.insert(b);
	// }
	// sort(C.begin(),C.end());
	// rep(i,0,N+M-1)
	// {
	// 	if(A.count(C[i])&&)
	// }	
	return (0);
}