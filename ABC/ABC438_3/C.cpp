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
	int N;
	cin >> N;
	vector<int> st;
	rep(i,0,N){
		int A;
		cin >> A;
		st.push_back(A);
		int s = st.size();
		if(s>=4){
			if(st[s-1]==st[s-2]&&st[s-2]==st[s-3]&&st[s-3]==st[s-4]){
				st.pop_back();st.pop_back();st.pop_back();st.pop_back();
			}
		}
	}
	cout << st.size() <<endl;
	return(0);
}