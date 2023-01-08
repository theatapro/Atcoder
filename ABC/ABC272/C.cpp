#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int main(void)
{
	int N;
	cin >> N;
	vector<int> list(N);

	rep(i, 0, N)
		cin >> list.at(i);
	if(N == 2 && (list.at(0)+list.at(1)) % 2 == 1)
	{
		cout << -1 <<endl;
		return(0);
	}
	sort(list.begin(), list.end());
	reverse(list.begin(), list.end());
	int big_odd1 = -1;
	int big_odd2 = -1;
	int big_even1 = -1;
	int big_even2 = -1;
	rep(i, 0, N)
	{
		if(list.at(i) % 2 == 0)
		{
			if(big_even1 >= 0 && big_even2 == -1)
				big_even2 = list.at(i);
			if(big_even1 == -1)
				big_even1 = list.at(i);
		}
		if(list.at(i) % 2 == 1)
		{
			if(big_odd1 >= 0 && big_odd2 == -1)
				big_odd2 = list.at(i);
			if(big_odd1 == -1)
				big_odd1 = list.at(i);
		}
	}
	// cout << big_even1 <<big_even2 << big_odd1<< big_odd2<<endl;
	ll ans = 0;
	if(big_even2 == -1)
		ans = big_odd1 + big_odd2;
	else if(big_odd2 == -1)
		ans = big_even1 + big_even2;
	else
		ans = max(big_odd1 + big_odd2, big_even1 + big_even2);

	cout << ans << endl;
}