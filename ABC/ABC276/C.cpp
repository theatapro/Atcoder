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
	vector<int> per(N);
	int cnt = 0;
	rep(i, 0, N)
	{
		int A;
		cin >> A;
		per[i] = A;
	}
	rep(i,1,N)
	{
		if(per[N - i - 1] < per[N - i])
			cnt++;
		else
			break;
	}

	int change = N - 1 - cnt - 1;
	int min_sabun = 100;
	int to, to_i;
	rep(i, change + 1, N)
	{
		int sabun;
		if(per[i] < per[change])
		{
			sabun = per[change] - per[i];
			min_sabun = min(sabun, min_sabun);
			if(sabun == min_sabun)
				to = per[i];
				to_i = i;
		}
	}
	int c = per[change];
	per[to_i] = c;
	per[change] = to;
	int sorting = change + 1;
	sort(per.begin() + sorting, per.end());
	reverse(per.begin() + sorting, per.end());

	rep(i, 0, N)
	{
		cout << per[i] << " ";
	}
	// cout << cnt << endl;
}