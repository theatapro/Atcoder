#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()

 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;



int	main(void)
{	
	int A,B,D;
	cin>> A >> B >> D;
	int num = A;
	while(num!=B)
	{
		cout << num << " ";
		num += D;
	}

	cout << B << endl;
	return (0);
}