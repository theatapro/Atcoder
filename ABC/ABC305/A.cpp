#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{
	int N;
	cin >> N;
	if(N%5==0)
	{
		cout << N << endl;
		return(0);
	}
	else if(N%5==1 || N%5==2)
	{
		cout << N-(N%5) << endl;
		return(0);
	}
	else if(N%5==3 || N%5==4)
	{
		cout << N+(5-N%5) << endl;
		return(0);
	}
	cout << N;
	return(0);
}