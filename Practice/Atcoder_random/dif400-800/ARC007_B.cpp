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
    int N, M;
	cin >> N >> M;
	map<int, int> place;
	rep(i, 0, N + 1)
		place[i] = i;
	int pre_zero = 0;
	rep(i, 0, M)
	{
		int cd;
		cin >> cd;
		rep(j, 0, N + 1)
			if (place[j] == cd)
				place[j] = place[0];
		place[0] = cd;
	}
	rep(i, 1, N + 1)
		cout << place[i] << endl;
	return (0);

}