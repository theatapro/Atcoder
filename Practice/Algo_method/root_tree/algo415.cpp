#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;
using P = pair<int, int>;

int main(void)
{
	int N, X;
	cin >> N >> X;
	vector<int> G(N - 1);

	rep(i, 0, N - 1)
		cin >> G[i];

	int out = G[X - 1];
	int ans = 0;
	while(out != 0)
	{
		out--;
		out = G[out];
		ans++;
	}
	cout << ans + 1 << endl;

}