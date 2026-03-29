#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

bool N_ika_seki(ll mid, ll N)
{
	for(ll i = 1;i * i<= mid;i++)
	{
		if(mid%i == 0  && mid / i <= N)
			return(true);
	}
	return(false);
}

// ll prime(ll N)
// {
// 	for(ll i = 2;i * i<= N;i++)
// 	{
// 		if(N%i == 0)
// 			return(0);
// 	}
// 	return(N);
// }

int	main(void)
{
	ll N,M;
	cin >> N >> M;
	if ((double)sqrt(M)>(double)N)
	{
		cout << -1 <<endl;
		return(0);
	}
	// if (prime(M))
	N = min(N,(ll)1000000);
	while(1)
	{
		if(N_ika_seki(M,N))
		{
			cout << M << endl;
			return(0);
		}
		M++;
	}
	// int	ok = M;
	// int ng = N*N;
	// int mid = 0;
	// 	//1,1,3,4,5,9
	// while (abs(ng - ok) > 1)
	// {
	// 	cout <<" ok: " << ok << " ng: " << ng<<endl;
	// 	mid = (ok + ng) / 2;
	// 	cout << "mid: " << mid <<endl;
	// 	if(!N_ika_seki(mid, N))
	// 			ok = mid;
	// 	else if(N_ika_seki(mid,N))
	// 			ng = mid;
	// }
	// cout << ok <<endl;
	
}
	// num_pair_min
