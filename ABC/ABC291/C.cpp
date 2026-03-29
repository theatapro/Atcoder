#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

int main(void)
{
	int N;
	cin >> N;
	set<P> pos;
	P now_pos = {0,0};
	pos.insert(now_pos);

	rep(i,0,N)
	{
		char c;
		cin >> c;
		if (c == 'R')
			now_pos.first++;
		if (c == 'L')
			now_pos.first--;
		if (c == 'U')
			now_pos.second++;
		if (c == 'D')
			now_pos.second--;
		if (pos.count(now_pos))
		{
			cout << "Yes" << endl;
			return(0);
		}
		pos.insert(now_pos);
	}

	cout << "No" << endl;
	return(0);
}
