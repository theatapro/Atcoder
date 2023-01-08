#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int N,K;
	cin >> N >> K;
	vector<char> list(N);
	string S;
	cin >> S;
	rep(i, 0, N)
		list.at(i) = S.at(i);

	int before = 0;
	int index = 0;
	vector<char> ans(K);
	while(index < K)
	{
		int min_alpha = 'z' + 1;
		rep(i, before, N - K + index + 1)
		{
			if(min_alpha > (int)list.at(i))
			{
				min_alpha = min(min_alpha, (int)list.at(i));
				if(min_alpha == (int)list.at(i))
					before = i + 1;
			}
		}
		ans.at(index) = (char)min_alpha;
		index++;
	}
	// rep(i, 0, K)
	// 	cout << list.at(i);
	rep(i, 0, K)
		cout << ans.at(i);
	cout << endl;
}
