#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

ll my_gcd(ll x, ll y)
{
    if(x % y == 0)
        return y;
    else
        return my_gcd(y, x % y);
}

ll my_lcm(ll x, ll y)
{
    return(x * y / my_gcd(x, y));
}

int	main(void)
{
	int N, K;
	cin >> N >> K;
	vector<int> ans(N);
	rep(i,0,N)
		ans[i] = i + 1;
	vector<int> Re(K);
	rep(i, 0, K)
		cin >> Re[i];
	int x = 0;
	while(x < K)
	{
		int ini = Re[x];
		int seq = 0;
		while(x < K)
		{
			if(Re[x]+1 == Re[x+1])
				seq++;
			else
				break;
			x++;
			if(x == K-1)
				break;
		}
		reverse(ans.begin()+ini-1, ans.begin()+ini+1+seq);
		x++;
	}
	rep(i, 0, N)
		cout << ans[i] << " ";
	
}