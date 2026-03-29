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
	set<int> check;
	rep(i,0,M)
	{
		int A;
		char B;
		cin >> A >> B;
		if(B=='F')
			cout << "No" <<endl;
		else{
			if(!check.count(A))
			{
			check.insert(A);
			cout <<"Yes"<<endl;
			}else
			{
			cout << "No" <<endl;
			}
		}
	}
	return (0);
}