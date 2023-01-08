#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int	main(void)
{
	int H,M;
	cin >> H >> M;

	int A,B,C,D;
	A = H/10;
	B = H%10;
	C = M/10;
	D = M%10;

	int h,m;
	h = 10*A + C;
	m = 10*B + D;
	if(h<24 && m <60)
	{
		cout << A << B << " " << C << D << endl;
		return(0);
	}

	while(H <24)
	{
		rep(i,M,60)
		{
			A = H/10;
			B = H%10;
			C = M/10;
			D = M%10;
			h = 10*A + C;
			m = 10*B + D;
			if(h<24 && m <60)
			{
				cout << A << B << " " << C << D << endl;
				return(0);
			}
		}
		M = 0;
		H++;
		if(H == 24)
			H = 0;
	}
}