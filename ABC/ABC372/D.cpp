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

//1+max更新回数
// [2,1,4,3,5]
//2,/2,4,4,5
//1,/4,4,5
//4,/4,5
//4,/5
//5,/
//各iに対するmax更新回数を求めたい。。各jか


int main(void)
{
	int N;
	cin >> N;
	// vector<P> ash;
	map<ll,ll> ash;
	map<ll,ll> ans_map;

	vector<ll> X_vec;
	vector<ll> P_vec(N);
	// X_vec.push_back(-INF-10);
	// ash[X]=i;

	rep(i,0,N)
	{
		ll X;
		cin >> X;
		X_vec.push_back(X);
		ash[X]=i;
	}
	rep(i,0,N)
		cin >> P_vec[i];
	rep(i,0,N)
	{
		ans_map[X_vec[i]]=P_vec[i];
	}
	//sum
	vector<ll> sum(N+1);
	sum[0]=0;
	rep(i,1,N+1)
		sum[i]=sum[i-1]+P_vec[i-1];
	//syori
	int Q;
	cin >> Q;
	rep(i,0,Q)
	{
		ll L,R;
		cin >> L >> R;
		// if(L==R&&ans_map.count(L))
		// {
		// 	cout << "ans"<<ans_map[L] <<endl;
		// }
		// else
		// {
		auto L_Iter = upper_bound(ALL(X_vec),L);
		auto R_Iter = upper_bound(ALL(X_vec),R);
		// cout << "L_com:"<<L_Iter - X_vec.begin()<<endl;
		// cout << "R_com:"<<R_Iter - X_vec.begin()<<endl;
		int L_c =L_Iter - X_vec.begin();
		int R_c =R_Iter - X_vec.begin();
		
// 		cout << "L"<< ash[*L_Iter]<<" "<<"R"
// <<ash[*R_Iter] <<endl;
// 		cout <<"L_sum"<<sum[ash[*L_Iter]]<< " R_sum"<<sum[ash[*R_Iter]]<<endl;
		
		ll ans = sum[R_c] - sum[L_c];
		cout <<"ans"<<ans <<endl;
		// }
	}

	return(0);
}