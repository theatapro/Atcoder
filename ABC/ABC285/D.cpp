#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<string, string>;

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
	int N;
	cin >> N;
	map<string, string> name;
	map<string, int> check;
	vector<string> S_list;

	rep(i, 0, N)
	{
		string S;
		string T;
		cin >> S >> T;
		name[S] = T;
		S_list.push_back(S);
		check[S] = -1;
	}

	rep(i, 0, S_list.size())
	{
		if(check[S_list[i]] == -1)
		{
			string ini = S_list[i];
			string now_str = S_list[i];
			string next_str;
			while(name.count(now_str))
			{
				next_str = name[now_str];
				if(ini == next_str)
				{
					cout << "No" << endl;
					return(0);
				}
				check[now_str] = 1;
				now_str = next_str;
				if (check[now_str] == 1)
					break;
			}
		}

	}
	cout << "Yes" << endl;

	return(0);
}
