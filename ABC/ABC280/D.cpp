#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


bool isPrime(ll a)
{
    if (a == 1) return false;

    ll lim = sqrt(a);
    rep(i,2,lim)
        if (a % i == 0)
			return(false);
     return true;

}
int	main(void)
{
	ll K;
	cin >> K;

	map<ll,ll> K_prime;
	ll num = K; 
	ll count_K = 0;

	if(isPrime(K))
	{
		cout << K << endl;
		return(0);
	}
	ll X = K;
	for (ll i = 2; i <= X; i++) {
		if(num%i == 0)
			count_K++;
		while (num%i == 0){ 
			K_prime[i]++;
			num /= i;
			X /= i;
		}
		cout << i << " " << K_prime[i] << endl;
	}
	// vector<ll> R_prime(K + 1);
	// int count = 0;
	// for(int r_num = 2; r_num < K; r_num++)
	// {
	// 	int r_fix = r_num;
	// 	for (int i = 2; i <= r_fix; i++) {
	// 		while (r_fix%i == 0)
	// 		{ 
	// 			R_prime.at(i)++;
	// 			r_fix /= i;
	// 			if(R_prime.at(i)==K_prime.at(i) && K_prime.at(i)!=0)
	// 			{
	// 				count++;
	// 				if(count == count_K)
	// 				{
	// 					cout << r_num << endl;
	// 					return(0);
	// 				}
	// 			}
	// 		}
	// 	}
	// }
	// cout << R_prime[2] << endl;
	return 0;
}
