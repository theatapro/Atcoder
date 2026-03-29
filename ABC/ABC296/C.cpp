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
	ll N,X;
	cin >> N >> X;
	vector<int> vec(N);
	rep(i,0,N)
		cin >> vec[i];
	
	if (X==0)
	{
		cout << "Yes"<<endl;
		return(0);
	}
	if (N==2 && abs(vec[0]-vec[1]) == abs(X))
	{
		cout << "Yes"<<endl;
		return(0);
	}

	sort(vec.begin(),vec.end());
	repd(i, N-1,0)
	{
		int	ok = i;
		int ng = 0;
		int mid = 0;
		//1,1,3,4,5,9
		while (abs(ng - ok) > 1)
		{
			// cout << "i: " << i <<" ok: " << ok << " ng: " << ng<<endl;
			mid = (ok + ng) / 2;
			// cout << "mid: " << mid <<endl;

			if (abs(vec[i]-vec[mid]) == abs(X))
			{
				cout << "Yes"<<endl;
				return(0);
			}
			else if(abs(vec[i]-vec[mid]) < abs(X))
				ok = mid;
			else if(abs(vec[i]-vec[mid]) > abs(X))
				ng = mid;
		}
	
	}
	cout << "No" <<endl;
}
