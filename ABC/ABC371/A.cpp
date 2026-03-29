#include <bits/stdc++.h>
// #include <atcoder/all>
// using namespace atcoder;
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	string S1,S2,S3;
	int A,B,C;
	cin >> S1 >>S2>>S3;
	if(S1!=S2)
	{
		cout <<"A"<<endl;
		return(0);
	}else{
		if(S1=="<")
		{
			if(S3=="<")
			{
			cout <<"B"<<endl;
			return(0);
			}else{
				cout<<"C"<<endl;
				return(0);
			}
		}
		if(S1==">")
		{
			if(S3=="<")
			{
			cout <<"C"<<endl;
			return(0);
			}else{
				cout<<"B"<<endl;
				return(0);
			}
		}
	}
	return(0);
}