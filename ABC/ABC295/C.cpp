#include <bits/stdc++.h>
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
	int N;
	cin >> N;
	set<int> syu;
	map<int,int> kazu;
	rep(i,0,N)
	{
		int A;
		cin >> A;
		syu.insert(A);
		kazu[A]++;
	}
	int ans = 0;
	while(!syu.empty())
	{
		ans += kazu[*begin(syu)]/2;
		syu.erase(*begin(syu));
	}
	cout << ans <<endl;
}
