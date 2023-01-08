#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
typedef long long ll;
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	ll max_dist = 0;
	ll dist = 0;
	int far_p = 0;
	rep(i, 2, N + 1)
	{
		cout << "? " << 1 << " " << i << endl;
		cin >> dist;
		max_dist = max(dist,max_dist);
		if(max_dist == dist)
			far_p = i;
	}
	dist = 0;
	max_dist = 0;
	rep(i, 1, N + 1)
	{
		cout << "? " << far_p << " " << i << endl;
		cin >> dist;
		max_dist = max(dist,max_dist);
	}
	cout << "! " << max_dist << endl;
}