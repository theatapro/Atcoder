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
	stack<int> s;
	cin >> N;

	rep(i,0,N){
		int in;
		cin >> in;
		s.push(in);
		if(s.size()<4) continue;
		else{
			int a = s.top(); s.pop();
			int b = s.top(); s.pop();
			int c = s.top(); s.pop();
			int d = s.top(); s.pop();
			if(a==b && b==c && c==d) continue;
			else{
				s.push(d);
				s.push(c);
				s.push(b);
				s.push(a);
			}
		}
	}
	cout << s.size() <<endl;
	return(0);
}