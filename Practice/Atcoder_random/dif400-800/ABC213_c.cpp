#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<ll, ll>;

int main()
{
    ll H, W, N;
    cin >> H >> W >> N;
	vector<P> A(N);
	vector<P> B(N);

    rep(i, 0, N)
	{
		cin >> A[i].first >> B[i].first;
		A[i].second = i;
		B[i].second = i;
	}

	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	
	vector<P> ans(N);
	//A
	ll ans_a = 1;
	ll pre_a = A[0].first;
	rep(i, 0, N)
	{
		ll a = A[i].first;
		if(a > pre_a)
			ans_a ++;
		ans[A[i].second].first = ans_a;
		pre_a = a;
	}
	//B
	ll ans_b = 1;
	ll pre_b = B[0].first;
	rep(i, 0, N)
	{
		ll b = B[i].first;
		if(b > pre_b)
			ans_b ++;
		ans[B[i].second].second = ans_b;
		pre_b = b;
	}

	rep(i, 0, N)
	{
		cout << ans[i].first << " " << ans[i].second << endl;
	}

}