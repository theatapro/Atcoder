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
	int N, M;
	cin >> N >> M;
	vector<int> s_vec(N);
	set<int> t_set;

	rep(i, 0, N)
	{
		string S;
		int s_num;
		cin >> S;
		s_num = stoi(S);
		s_num %= 1000;
		s_vec[i] = s_num;
	}
	rep(i,0,M)
	{
		string T;
		int t_num;
		cin >> T;
		t_num = stoi(T);
		t_set.insert(t_num);
	}
	int ans = 0;
	rep(i,0,N)
	{
		if(t_set.count(s_vec[i]))
			ans ++;
	}
	cout << ans << endl;
	
}