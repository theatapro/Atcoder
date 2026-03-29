#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

int main(void)
{
	int N;
	cin >> N;
	vector<ll> vec(N);
	ll sum = 0;
	rep(i,0,N)
	{
		cin >> vec[i];
		sum+=vec[i];
	}
	ll ave = sum/N;
	ll pos = 0;
	ll neg = 0;
	rep(i,0,N)
	{
		if(ave - vec[i] > 0)
			pos += ave - vec[i];
		else if(ave+1 - vec[i] <= 0)
			neg += vec[i]- (ave+1);
	}
		cout << max(pos,neg) << endl;
	// else
	// {
	// 	pos=0,neg=0;
	// 	ave++;
	// 	rep(i,0,N)
	// 	{
	// 		if(ave - vec[i] > 0)
	// 			pos += ave - vec[i];
	// 		else
	// 			neg += vec[i]- ave;
	// 	}
	// 	cout << min(pos,neg) << endl;
	// }
		// cout << pos << " " <<neg << endl;
	return(0);
}
