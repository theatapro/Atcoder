#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int DIV = 1e8;

using namespace std;
using P = pair<ll, ll>;

int	main(void)
{	
	int N,Q;
	cin >> N>>Q;

	//0:white
	vector<int> masu(N,0);
	int ans = 0;
	rep(i,0,Q)
	{
		int A;
		cin >>A;
		A--;
		//when masu colored white
		if(masu[A]==0)
		{
			if(A==0)
			{
				if(masu[A+1]==0)
					ans++;			
			}
			else if(A==N-1)
			{
				if(masu[A-1]==0)
					ans++;			
			}
			else
			{
				//ryohou_shiro_
				if(masu[A-1]==0 && masu[A+1]==0)
					ans++;
				//ryohou_kuro_
				if(masu[A-1]==1 && masu[A+1]==1)
					ans--;
			}

		}
		//when masu colored black
		if(masu[A]==1)
		{
			if(A==0)
			{
				if(masu[A+1]==0)
				ans--;			
			}
			else if(A==N-1)
			{
				if(masu[A-1]==0)
				ans--;			
			}
			else
			{
				//ryohou_shiro_
				if(masu[A-1]==0 && masu[A+1]==0)
				ans--;
				//ryohou_kuro_
				if(masu[A-1]==1 && masu[A+1]==1)
				ans++;
			}
			
		}
		if(masu[A]==0)
			masu[A]=1;
		else
			masu[A]=0;
		cout << ans << endl;
	}
	return(0);
}