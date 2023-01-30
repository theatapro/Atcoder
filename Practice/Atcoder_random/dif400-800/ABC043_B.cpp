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
    string S;
    cin >> S;
	deque<char> deq_c;

    rep(i, 0, S.size())
	{
		if (S[i] == '0')
			deq_c.push_back('0');
		else if (S[i] == '1')
			deq_c.push_back('1');
		else
			if (!deq_c.empty())
				deq_c.pop_back();
	}
	while (!deq_c.empty())
	{
		cout << deq_c.front();
		deq_c.pop_front();
	}

	cout << endl;
	
}