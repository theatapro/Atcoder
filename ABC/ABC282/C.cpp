#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int main(void)
{
	ll N;
	char a;
	string ans;
	bool flag = false;
	cin >> N;

	rep(i, 0, N)
	{
		cin >> a;
		if(a == '"')
		{
			if(flag == false)
				flag = true;
			else
				flag = false;
		}

		if(a == ',' && flag == false)
			ans.push_back('.');
		else
			ans.push_back(a);
	}

	cout << ans << endl;

}
