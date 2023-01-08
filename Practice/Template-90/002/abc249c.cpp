#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace  std;
int main(void)
{
	int N, K;
	cin >> N >> K;
	vector<string>	list(N);
	
	rep(i, 0, N)
		cin >> list.at(i);

	int ans = 0;
	for(int bit = 0; bit < (1<<N); bit++)
	{
		vector<int>	list_cnt(26);
		bitset<16> bit_list(bit);
		rep(i, 0, N)
		{
			if(bit_list.test(i))
			{
				rep(j, 0, list.at(i).size())
				{
					list_cnt[list.at(i).at(j) - 'a']++;
				}
			}
		}
		int now_ans = 0;
		rep(cnt_index, 0, 26)
		{
			if(list_cnt.at(cnt_index) == K)
				now_ans++;
		}
		ans = max(now_ans, ans);
	}
	cout << ans << endl;
}