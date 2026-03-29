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
	int N,R,C;
	cin >> N >> R >> C;
	string S;
	cin >> S;
	
	set<P> smoke;
	P smoke_now = make_pair(0,0);
	P person_now = make_pair(-1*R,C);

	smoke.insert(smoke_now);
	rep(i,0,S.size())
	{
		char dir = S[i];
		if(dir=='N')
		{
			smoke_now.first--;
			person_now.first--;
		}
		if(dir=='S')
		{
			smoke_now.first++;
			person_now.first++;
		}
		if(dir=='E')
		{
			smoke_now.second--;
			person_now.second--;
		}
		if(dir=='W')
		{
			smoke_now.second++;
			person_now.second++;
		}
		smoke.insert(smoke_now);
		if(smoke.count(person_now))
			cout << '1';
		else
			cout << '0';
	}
	// cout << change('A') << change('a') <<endl;
	return(0);
}