#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

bool is_include(string S, int num)
{
	rep(i,0,S.size())
		if(S[i] == '0' + num)
			return(true);
	return(false);
}

int main(void)
{
	vector<int> zyun(3);
	zyun={0,1,2};
	int M;
	vector<string> S(3);
	cin >> M;
	rep(i,0,3)
		cin >> S[i];
	int ans = INF;
	rep(pattern,0,6)
	{
		// cout << zyun[0] << zyun[1] << zyun[2] <<endl;
		rep(stop_num,0,10)
		{
			if(!(is_include(S[0],stop_num) 
			&& is_include(S[1],stop_num) 
			&&is_include(S[2],stop_num)))
				continue;
			// cout << "stop_num : " << stop_num <<endl;
			int now_time = 0;
			// int slot_time = 0;
			while(now_time < M)
			{
				if(S[zyun[0]][now_time%M] == '0'+stop_num)
				{
					// slot_time+=now_time;
					now_time++;
					break;
				}
				now_time++;
			}
			// cout << now_time << endl;
			while(now_time < 2*M)
			{
				if(S[zyun[1]][now_time%M] == '0'+stop_num)
				{
					now_time++;
					break;
				}
				now_time++;
			}
			// cout << now_time << endl;
			while(now_time < 3*M)
			{
				if(S[zyun[2]][now_time%M] == '0'+stop_num)
				{
					now_time++;
					break;
				}
				now_time++;
			}
			// cout << now_time << endl;
			// cout << "**************" << endl;
			ans = min(ans,now_time - 1);
		}
		next_permutation(zyun.begin(),zyun.end());
	}
	if(ans == INF)
	{
		cout << "-1" << endl;
		return (0);
	}
	cout << ans <<endl;

	return(0);
}
