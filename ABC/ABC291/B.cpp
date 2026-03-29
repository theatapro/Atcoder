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
	vector<int> ten(5*N);
	rep(i,0,5*N)
	{
		cin >> ten[i];
	}
	sort(ten.begin(), ten.end());
	float ans = 0;
	rep(i, N, 5*N - N)
		ans += ten[i];
	ans /= 3*N;
	cout << setprecision(10)<<ans << endl;
	
}