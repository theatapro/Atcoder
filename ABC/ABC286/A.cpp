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
	int N, P, Q, R, S;
	cin >> N >> P >> Q >> R >> S;
	vector<int> vec(N);
	vector<int> st(Q-P+1);
	int st_i = 0;

	rep(i, 0, N)
	{
		int n;
		cin >> n;
		vec[i] = n;
		if(i >= P - 1 && i<=Q-1)
		{
			st[st_i] = n;
			st_i++;
		}
	}
	
	rep(i,0,Q-P+1)
	{
		int x;
		x = vec[R - 1 + i];
		vec[R - 1 + i] = st[i];
		vec[P-1+i] = x;
	}

	rep(i,0,N)
		cout << vec[i] << " ";

}