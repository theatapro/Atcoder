#include <bits/stdc++.h>
// #include <atcoder/all>
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
	int N,M;
	cin >> N >> M;
	vector<string> S(N);
	vector<int> A(M);
	rep(i,0,M)
		cin >> A[i];
	rep(i,0,N)
		cin >> S[i];
	int max_p = 0;
	int max_i = 0;
	vector<vector<int>> remain(N);
	vector<int> point_list(N);

	rep(i,0,N)
	{
		int point = i+1;
		rep(j,0,M)
		{
			if(S[i][j]=='o')
				point += A[j];
			else
				remain[i].push_back(A[j]);
		}
		sort(remain[i].begin(),remain[i].end());
		reverse(remain[i].begin(),remain[i].end());
		point_list[i] = point;
		max_p = max(max_p, point);
		if(max_p == point)
			max_i = i;
	}
	// cout << "debug" << max_p << " " << max_i << endl;
	rep(i,0,N)
	{
		if(i == max_i)
		{
			cout << 0 << endl;
			continue;
		}
		int now_p = point_list[i];
		rep(j,0,remain[i].size())
		{
			now_p += remain[i][j];
			if(now_p > max_p)
			{
				cout << j+1 << endl;
				break;
			}
		}
	}
	return(0);
}
