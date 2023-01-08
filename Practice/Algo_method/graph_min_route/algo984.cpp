#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<int> A(N - 1);
	vector<int> B(N - 2);
	vector<int> dp(N);

	rep(i, 0, N - 1)
		cin >> A[i];
	rep(i, 0, N - 2)
		cin >> B[i];
	
	dp[0] = 0;
	dp[1] = A[0];
	rep(i, 2, N)
		dp[i] = min(dp[i - 1] + A[i - 1], dp[i - 2] + B[i - 2]);
	
	cout << dp[N - 1] << endl;

	return(0);
}