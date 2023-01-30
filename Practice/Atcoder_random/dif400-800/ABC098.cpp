#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

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

int main()
{
    ll N;
    cin >> N;
	vector<ll> vec(N);

    rep(i, 0, N)
		cin >> vec[i];

	int r = 0;
	ll sum = 0;
	ll ans = 0;
	rep(l, 0, N)
	{
		while(r < N && (sum ^+ vec[r]) == (sum + vec[r]))
		{
			sum += vec[r]; 
			r++;
		}
		ans += r - l;
		if(l == r)
			r++;
		else
			sum -= vec[l];
	}
	cout << ans << endl;

}