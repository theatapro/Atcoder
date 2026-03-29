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

using namespace std;
// using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()

// a
// a A
// aA Aa
// aAAa AaaA
// aAAaAaaA AaaAaAAa
// aAAaAaaA AaaAaAAa AaaAaAAa aAAaAaaA
// 11,101,110,1001,1010
// 0,3,5,6,9,10,12,15
// 2^(2*[i-1])
// 2,3,5,8,9,12,14,15,17,20,22,23,26,27,29,32

int main(void)
{
		int N;
		cin >> N;
		vector<int> A(N);
		rep(i,0,N)
			cin >> A[i];
		int l = 1;
		int ans = 0;
		if(N==1)
		{
			cout << 0 << endl;
		}
		while(l<N)
		{
			if(A[l-1]==A[l])
			{
				int now = 2;
				map<int,int> ma;
				ma[A[l]]==2;
				bool ok = true;
				int k = 1;
				while(ok)
				{
					if(l+k>=N)
						break;
					if(A[l+k]==A[l+k+1] && ma[A[l+k]]==0)
					{
						now+=2;
						ma[A[l+k]]=2;
						k+=2;
					}
					else
					{
						ok = false;
						break;
					}
				}
				ans = max(ans,now);
				l=l+k;
			}
			else
				l++;
		}
		// cout << S[K%S.size()] <<endl;
	cout <<ans;
	// cout << change('A') << change('a') <<endl;
	return(0);
}