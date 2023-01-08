#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int	main(void)
{
	ll N;
	cin >> N;
	bitset<61> bit(N);

	vector<ll> flag;
	rep(i, 0, 61)
	{
		if(bit.test(i))
			flag.push_back(i);
	}

	ll flag_size = flag.size();

	for(ll i = 0; i < (1<<flag_size); i++)
	{
		bitset<61> ans(N);
		bitset<20> bit_list(i);
		ll ansdeci = 0;

		rep(j, 0, flag_size)
		{
			if(!bit_list.test(j))
			{
				ans.set(flag.at(j), 0);
			}
		}
		ansdeci = ans.to_ullong();
		cout << ansdeci << endl;
	}
	// for(int bit = 0; bit < (1<<N); bit++)
	// {
	// 	vector<int>	list_cnt(16);
		
	// 	rep(i, 0, N)
	// 	{
	// 		if(bit_list.test(i))
	// 		{
	// 			rep(j, 0, list.at(i).size())
	// 			{
	// 				list_cnt[list.at(i).at(j) - 'a']++;
	// 			}
	// 		}
	// 	}
	// 	int now_ans = 0;
	// 	rep(cnt_index, 0, 26)
	// 	{
	// 		if(list_cnt.at(cnt_index) == K)
	// 			now_ans++;
	// 	}
	// 	ans = max(now_ans, ans);
	// }
	
	return (0);
}