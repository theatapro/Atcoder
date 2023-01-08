#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<pair<int, int> > list(N);
	rep(i, 0, N)
		cin >> list.at(i).first >> list.at(i).second;
	
	int cnt = 0;
	int time = 0;
	int eariest_finish_time = 10010;
	int select_i = 0;
	int ans = 0;
	while(true)
	{
		rep(i, 0, N)
		{
			if(list.at(i).first >= time && list.at(i).first != -1)
			{
				eariest_finish_time = min(eariest_finish_time, list.at(i).second);
				if(eariest_finish_time == list.at(i).second)
					select_i = i;
			}
		}
		if(eariest_finish_time == 10010)
			break;
		list.at(select_i).first = -1;
		ans++;
		time = eariest_finish_time;
		eariest_finish_time = 10010;
	}
	cout << ans << endl;
}