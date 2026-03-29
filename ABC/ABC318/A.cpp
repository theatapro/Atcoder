#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	int N,M,P;
	cin >> N >> M >>P;
	int ans = 0;
	while(M + ans*P <= N)
		ans++;
	cout << ans <<endl;
	return(0);
}