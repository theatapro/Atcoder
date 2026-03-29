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
	int N, M;
	cin >> N >> M;
	vector<ll> seller(N);
	vector<ll> buyer(M);
	rep(i,0,N)
		cin >> seller[i];
	rep(i,0,M)
		cin >> buyer[i];
	sort(seller.begin(),seller.end());
	sort(buyer.begin(),buyer.end());

	rep(i,0,seller.size())
	{
		auto Iter1 = lower_bound(buyer.begin(),buyer.end(), seller[i]);
		int a = buyer.end() - Iter1;
		cout << a <<endl;
		if(i==0 && a==0)
		{
			cout << buyer[buyer.size()-1]+1<<endl;
			return(0);
		}
		if(i+1>=a)
		{
			cout << seller[i] << endl;
			return(0);
		}
	}
	cout << buyer[buyer.size()-1]+1<<endl;
	return(0);
}
