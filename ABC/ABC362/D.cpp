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

struct UnionFind {
	vector<int> par, rank, siz;

	UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) { }

	int root(int x) {
		if (par[x]==-1) return x; // x が根の場合は x を返す
		else return par[x] = root(par[x]); // 経路圧縮
	}

	bool issame(int x, int y) {
		return root(x)==root(y);
	}

	bool unite(int x, int y) {
		int rx = root(x), ry = root(y); // x 側と y 側の根を取得する
		if (rx==ry) return false; // すでに同じグループのときは何もしない
		// union by rank
		if (rank[rx]<rank[ry]) swap(rx, ry); // ry 側の rank が小さくなるようにする
		par[ry] = rx; // ry を rx の子とする
		if (rank[rx]==rank[ry]) rank[rx]++; // rx 側の rank を調整する
		siz[rx] += siz[ry]; // rx 側の siz を調整する
		return true;
	}

	int size(int x) {
		return siz[root(x)];
	}
};
struct edge{
	ll cost;
	int u;
	int v;
};

// 構造体 edge の比較関数
bool comp(const edge &e, const edge &f) {
    return e.cost < f.cost;
}

int main(void)
{
	ll N,M;
	cin >> N>>M;
	vector<ll> A(N);
	vector<edge> B(M);
	vector<edge> new_B(M);
	vector<vector<ll> > G(N);
	vector<vector<ll> > cost(N,vector<ll>(N));

	rep(i,0,N)
		cin >>A[i];
	rep(i,0,M)
	{
		cin >>B[i].u>>B[i].v >> B[i].cost;
		cost[B[i].u-1][B[i].v-1]=B[i].cost;
		cost[B[i].v-1][B[i].u-1]=B[i].cost;
	}
	new_B = B;
	rep(i,0,M)
		new_B[i].cost+=A[B[i].u-1]+A[B[i].v-1];
	sort(new_B.begin(),new_B.end(),comp);
	UnionFind uf(N);

	rep(i,0,new_B.size())
	{
		if(!uf.issame(new_B[i].u,new_B[i].v))
		{
			uf.unite(new_B[i].u,new_B[i].v);
			G[new_B[i].u-1].push_back(new_B[i].v-1);
			G[new_B[i].v-1].push_back(new_B[i].u-1);
			// cout << new_B[i].u << " " <<new_B[i].v<<endl;
		}
	}

	vector<ll> ans(N);
	queue<ll> que;
	set<ll> seen;
	que.push(0);
	seen.insert(0);
	ans[0]=A[0];
	while(!que.empty())
	{
		ll u = que.front();
		que.pop();
		for(auto v : G[u])
		{
			// cout << u << "#"<<endl;
			if(seen.count(v))
				continue;
			else
			{
				ans[v]=ans[u]+cost[u][v]+A[v];
				seen.insert(v);
				que.push(v);
			}
		}

	}
	rep(i,1,N)
		cout << ans[i] <<endl;
	return(0);
}