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
	int N;
	cin >> N;
	string num = to_string(N);
	int num_size = num.size();
	if(num_size < 4)
	{
		cout << N << endl;
		return(0);
	}
	else if(num_size < 5)
	{
		cout << N / 10 << "0" << endl;
		return(0);
	}
	else if(num_size < 6)
	{
		cout << N / 100 << "00" << endl;
		return(0);
	}
	else if(num_size < 7)
	{
		cout << N / 1000 << "000" << endl;
		return(0);
	}
	else if(num_size < 8)
	{
		cout << N / 10000 << "0000" << endl;
		return(0);
	}
	else if(num_size < 9)
	{
		cout << N / 100000 << "00000" << endl;
		return(0);
	}
	else if(num_size < 10)
	{
		cout << N / 1000000 << "000000" << endl;
		return(0);
	}

	return(0);
	
}