#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	int N;
	int ans = 0;
	int max_H = 0;
	int H;
	cin >> N;
	rep(i, 0, N)
	{	
		cin >> H;
		max_H = max(H,max_H);
		if(max_H == H)
			ans = i+1;
	}
	cout << ans << endl;
}