#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	vector<string> S(10);

	rep(i ,0, 10)
		cin >> S.at(i);

	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int b = 0;

	rep(i, 0, 10)
	{
		rep(j, 0, 10)
			if(S.at(i).at(j) == '#')
			{
				A = i + 1;
				C = j + 1;
				B = i;
				D = j;
				rep(k, i, 10)
					if(S.at(k).at(j) == '#')
						B += 1;
				rep(l, j, 10)
					if(S.at(i).at(l) == '#')
						D += 1;
				b = 1;
				break;
			}
		if(b)
			break;
	}
	cout << A << " " << B <<endl;
	cout << C << " " << D <<endl;
}