#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;

int main(void)
{
	int H, W;
	cin >> H >> W;

	int ans = (H - 1) * W + (W - 1) * H - (H * W - 1);
	cout << ans <<endl;
	return(0);
}