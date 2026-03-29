#include <bits/stdc++.h>
// #include <atcoder/all>
typedef long long ll;
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }


const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
// using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()
// struct G{
// 	int from;
// 	int to;
// 	ll cost;
// };

int main(void)
{
	ll N,M,L,S,T;
	cin >> N >> M >> L >> S >> T;
	vector<vector<P>> Graph(N);

	rep(i,0,M){
		ll a,b,c;
		cin >> a >> b >> c;
		a--;b--;
		Graph[a].push_back(make_pair(b,c));
	}

	queue<P> que;
	que.push(make_pair(0,0));
	ll step = 0;
	while(step<L){
		ll S = que.size();
		rep(i,0,S)	{
			ll now_pos = que.front().first; // キューから先頭頂点を取り出す
			ll now_cost = que.front().second; // キューから先頭頂点を取り出す
			que.pop();

			// v から辿れる頂点をすべて調べる
			for (P next : Graph[now_pos]) {
				// 新たな白色頂点 nv について距離情報を更新してキューに追加する
				ll next_pos = next.first;
				ll next_cost = now_cost+next.second;
				// if(step==0)
				// 	cout << next_pos+1 << " " << next_cost <<endl;
				que.push(make_pair(next_pos,next_cost));
			}
		}
		step++;
	}
	vector<P> path_cost;
	ll q = que.size();
	rep(i,0,q){
		path_cost.push_back(que.front()); 
		que.pop();
	}
	vector<ll> ans;
	set<ll> se;
	ll path_size = path_cost.size();
	rep(i,0,path_size){
		ll u =path_cost[i].first;
		if(path_cost[i].second>=S && path_cost[i].second<=T){
			if(se.count(u)) {continue;}
			else {se.insert(u);ans.push_back(u);}
		}
	}
	sort(ans.begin(),ans.end());
	ll ans_size = ans.size();
	if(ans_size == 0)
		cout << " "<<endl;
	else
		rep(i,0,ans_size)
			cout << ans[i] + 1 << " ";
	return(0);
}