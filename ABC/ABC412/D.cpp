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

struct Query
{
	int q;
	int p;
	string s;/* data */
};

int main(void)
{
	int N,M;
	cin >> N >>M;
	vector<P> G(M);
	rep(i,0,M)
	{
		int A,B;
		cin >> A >>B;
		A--;B--;
		G[i]=make_pair(A,B);
	}
	vector<int> sample(N);
	rep(i,0,N)
		sample[i]=i;

	int ans = 0;
	do{
		vector<P> sv;
		rep(i,0,N-1)
		{
			sv.push_back(make_pair(sample[i],sample[i+1]));
			sv.push_back(make_pair(sample[i+1],sample[i]));
		}
		sv.push_back(make_pair(sample[N-1],sample[0]));
		sv.push_back(make_pair(sample[0],sample[N-1]));

		//nashi
		rep(i,0,N)
			rep(j,0,N)
			{
				if(i==j)
					continue;
				
			}
		//ari
	}while(next_permutation(sample.begin(),sample.end()));
	return(0);
}