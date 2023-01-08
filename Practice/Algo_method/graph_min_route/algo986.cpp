#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;
using P = pair<int, int>;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> dist(N, 10e8);
	vector<int> ans(N, 10e8);

	rep(i, 0, M)
	{
		int from, to, cost;
		cin >> from >> to >> cost;

		int re = dist[from];
		dist[from] = min(cost, dist[from]);
		if(re != dist[from])
			ans[from] = to;
		else
			if(cost == dist[from])
				ans[from] = min(ans[from], to);
			
	}
	
	rep(i, 0, N)
		if(ans[i] == 10e8)
			cout << -1 << endl;
		else
			cout << ans[i] << endl;

	return(0);
}