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
	int N,M;
	cin >> N>>M;
	vector<string> S(N);
	rep(i,0,N)
		cin >> S[i];
	ll ans =100;
	for (int bit = 0; bit < (1<<N); ++bit) {
        vector<int> store;
		bool judge = false;

        for (int i = 0; i < N; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                store.push_back(i);
            }
        }
		set<int> se;
		rep(i,0,store.size())
		{
			rep(j,0,M)
			{
				if(S[store[i]][j]=='o')
					se.insert(j);
			}
		}
		if(se.size()==M)
			ans = min(ans,(ll)store.size());
        // cout << bit << ": {";
        // for (int i = 0; i < (int)S.size(); ++i) {
        //     cout << S[i] << " ";
        // }
        // cout << "}" << endl;
    }
	cout << ans << endl;
	return(0);
}