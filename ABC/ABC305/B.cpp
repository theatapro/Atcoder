#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{
	vector<int> N(6);
	N[0]= 3;
	N[1]= 1;
	N[2]=4;
	N[3]=1;
	N[4]=5;
	N[5]=9;
	char p, q;
	cin >> p >> q;
	if(q<p)
		swap(p,q);
	int st = p - 'A';
	int end = q - 'A'- 1;
	int ans = 0;
	rep(i, st, end+1)
		ans+=N[i];
	cout << ans;
	return(0);
	
}