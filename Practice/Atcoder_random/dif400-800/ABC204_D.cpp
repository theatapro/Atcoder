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
    int N;
    cin >> N;
	vector<int> time_vec(N);
	int sum_oven_a = 0;
	int sum_oven_b = 0;

    rep(i, 0, N)
	{
		int T;
		cin >> T;
		time_vec[i] = T; 
		if (N == 1)
		{
			cout << T << endl;
			return (0);
		}
	}

	sort(time_vec.begin(), time_vec.end());
	reverse(time_vec.begin(), time_vec.end());

	rep(i, 0, N)
	{
		if (sum_oven_a < sum_oven_b)
			sum_oven_a += time_vec[i];
		else
			sum_oven_b += time_vec[i];
	}

	cout << max(sum_oven_a, sum_oven_b) << endl;
	
}