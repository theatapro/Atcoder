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
	vector<bool> people(N);
	set<int> kind;
	rep(i,0,N)
	{
		int X;
		cin >> X;
		X--;
		if (!people[i])
		{
			people[X] = true;
			kind.insert(X);
		}
	}
	cout << N - kind.size() << endl;
	rep(i,0,N)
	{
		if(!people[i])
			cout << i + 1 << " ";
	}
	return(0);
	
}