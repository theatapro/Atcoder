#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<ll, ll>;

	// bitset<10> bit;

	// for(int bit = (1<<N); bit >= 0; bit--)
	// {
	// 	ll now_money = 0;
	// 	bitset<10> s(bit);
	// 	rep(i,0,N)
	// 	{
	// 		if(s.test(i))
	// 			now_money += vec[i];
	// 	}
	// 	se.insert(now_money);
	// }

int	main(void)
{
	ll N,K;
	cin >> N >> K;

	vector<ll> vec(N);
	rep(i,0,N)
		cin >> vec[i];
	sort(vec.begin(),vec.end());
	set<ll> se;
	vector<ll> dp(K);

	ll cnt = 1;
	while(!se.empty())
	{
		ll a = *begin(se);
		if(cnt == K)
		{
			cout << a << endl;
			return(0);
		}
		se.erase(a);
		cnt++;

	}
	return(0);
}
