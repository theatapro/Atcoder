#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	int N, K;
	cin >> N >> K;
	vector<int> list(200);
	int A;

	if(K>=N)
	{
		rep(i,0,N)
			cout << 0 << " ";
		cout << endl;
		return(0);
	}

	rep(i,0,K)
		cin >> A;

	rep(i, 0, N - K)
		cin >> list[i];
	rep(i,0,N)
		cout << list[i] << " ";
	cout << endl;

}