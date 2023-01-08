#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	vector<int> B(M);

	rep(i, 0, N)
		cin >> A.at(i);
	rep(i, 0, M)
		cin >> B.at(i);
	sort(A.begin(), A.end());
	int ans = 0;
	int j = 0;

	rep(i, 0, N)
	{
		while(j < B.size())
		{
			if(A.at(i) <= B.at(j))
			{
				ans++;
				j++;
				break;
			}
			j++;
		}
	}
	cout << ans << endl;
}
