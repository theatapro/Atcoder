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
	vector<int> A(7);
	rep(i,0,7)
		cin >> A[i];
	multiset<int> ms;
	rep(i,0,7)
		ms.insert(A[i]);
	int big = 0;
	for(auto a : A)
	{
		if(ms.count(a)>=3)
			big = a;
	}
	if(big==0)
		{
			cout << "No" <<endl;
			return(0);
		}
	for(auto a : A)
	{
		if(ms.count(a)>=2 && a!= big)
		{
			cout <<"Yes"<<endl;
			return(0);
		}
	}
			cout << "No" <<endl;
			return(0);

	return (0);
}