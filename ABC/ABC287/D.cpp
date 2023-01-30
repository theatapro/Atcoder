#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
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

ll prime(ll x)
{
	rep(i, 2, 1e7)
	{
		if(x % i == 0)
			return(i);
	}
	return(1);
}

int	main(void)
{
	string S,T;
	cin >> S >> T;
	string G = "";
	rep(i, 0, T.size())
	{
		if('a' <= T[i] && T[i] <= 'z')
			G[i] = '0';
		else
			G[i] = '1';
	}
	rep(i, 0, S.size())
	{
		if('a' <= S[i] && S[i] <= 'z')
			S[i] = '0';
		else
			S[i] = '1';
	}
	string N;

	{
		rep(i, 0, T.size()+1)
		{
			N = S.substr(0, i) + S.substr(S.size()- T.size()+ i, T.size() - i);
			cout << N << endl;
			if (N == G)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		 
	}

	return(0);
}
