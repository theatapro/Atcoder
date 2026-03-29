#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int	main(void)
{
	ll N,M,P;
	cin >> N >> M >>P;
	vector<ll> A(N);
	vector<ll> B(M);
	vector<ll> sum_A(N);
	vector<ll> sum_B(M);
	rep(i,0,N)
		cin >> A[i];
	rep(i,0,M)
	{
		cin >> B[i];

	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	rep(i,0,N)
	{
		if(i==0)
			sum_A[i] = A[i];
		else
			sum_A[i] += sum_A[i-1]+A[i];
	}
	rep(i,0,M)
	{
		if(i==0)
			sum_B[i] = B[i];
		else
			sum_B[i] += sum_B[i-1]+B[i];
	}
	ll ans = 0;
		// // key以下のもので一番右のindex
	rep(i,0,N)
	{
		if(P>A[i])
		{
			auto b = upper_bound(B.begin(),B.end(),P-A[i]);
			ll x = (ll)(b - B.begin());
			// cout << " // "<< b - B.begin()<< endl;
			// cout <<  M-x<< endl;
			if(x!=0)
				ans += sum_B[x-1]+A[i]*x;
			ans += (M-x)*P;
			// if(i==1)
			// {
			// 	cout << x <<endl;
			// 	cout << sum_B[x-1]+A[i]*x <<endl;
			// 	cout << (M-x)*P<<endl;

			// }
		}
		else
		{
			ans+=M*P;
		}
		// cout << "i" <<i << " A[i]" << A[i] << endl;
		// cout << ans << endl;

	}

	cout << ans <<endl;
	return(0);
	
}
