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
	int N;
	cin >> N;
	// vector<string> s(N);
	stack<string> st;

	rep(i, 0, N)
	{
		string s;
		cin >> s;
		st.push(s);
	}
	rep(i, 0, N)
	{
		string s_out = st.top();
		st.pop();
		cout << s_out << endl;
	}

}