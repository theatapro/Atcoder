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
using P = pair<int, int>;

int	main(void)
{	
	int N;
	cin >> N;
	vector<ll> A(N);
	rep(i,0,N)
		cin >> A[i];
	stack<ll> st;
	st.push(A[0]);
	rep(i,1,N)
	{
		ll top = st.top();
		st.pop();
		if(A[i]==top)
		{
			st.push(A[i]+1);
			while(st.size()>=2)
			{
				ll fir = st.top();
				st.pop();
				ll sec = st.top();
				if(fir==sec)
				{
					st.pop();
					st.push(sec+1);
				}
				else
				{
					st.push(fir);
					break;
				}
			}
		}
		else
		{
			st.push(top);
			st.push(A[i]);
		}
	}
	cout << st.size();
	return(0);
}