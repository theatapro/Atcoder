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
	int N,M,K;
	cin >> N >> M >>K;
	vector<ll> A(N);
	vector<vector<int> > result(M,vector<int>());
	rep(i,0,M)
	{
		int num;
		cin >> num;
		rep(j,0,num)
		{
			int A;
			cin >> A;
			result[i].push_back(A);
		}
		char c;
		cin >> c;
		if(c=='o')
			result[i].push_back(0);
		else
			result[i].push_back(-1);
	}
	ll ans =0;
	for (int bit = 0; bit < (1<<N); ++bit) {
        set<int> S;
        for (int i = 0; i < N; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.insert(i+1);
            }
        }
		bool judge = true;
		rep(i,0,M)
		{
			int corrrect=0;
			rep(j,0,result[i].size()-1)
			{
				if(S.count(result[i][j]))
					corrrect++;
			}
			if((corrrect>=K&&result[i][result[i].size()-1]==0)
			||(corrrect<K&&result[i][result[i].size()-1]==-1))
				continue;
			else
			{
				judge = false;
				break;
			}
		}
		if(judge)
			ans++;
        // cout << bit << ": {";
        // for (int i = 0; i < (int)S.size(); ++i) {
        //     cout << S[i] << " ";
        // }
        // cout << "}" << endl;
    }

	cout << ans<<endl;
	return(0);
}