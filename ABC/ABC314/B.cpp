#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int dfs(vector<vector<int> > G, int i,vector<int> &strong, int level,int N)
{
	int ret = 0;
	// cout << "now_" << i << " level" << level << endl;
	if(level >= N)
		return(-1);
	if(G[i].size() == 0)
		strong.push_back(i);
	for(auto n:G[i])
	{
		ret = dfs(G,n,strong,level+1,N);
		if(ret == -1)
			return(-1);
	}
	return(0);
}

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

int	main(void)
{
	int N,M;
	cin >> N >>M;
	vector<vector<int> > G(N);
	vector<int> strong;
	set<int> se;
	UnionFind uf(N);

	// vector<bool> day(D);
	rep(i,0,M)
	{
		int a,b;
		cin >> a >> b;
		a--;b--;
		G[b].push_back(a);
		uf.unite(a,b);
	}
	rep(i,0,N)
	{
		if(uf.size(i) != N)
		{
			cout << -1 << endl;
			return(0);
		}
	}
	rep(i,0,N)
	{
		if(G[i].size()==0)
			strong.push_back(i);
	}
	// rep(i,0,N)
	// {
	// 	int level = 0;
	// 	int res = dfs(G,i,strong,level, N);
	// 	if(res == -1)
	// 	{
	// 		cout << -1 << endl;
	// 		return(0);
	// 	}
	// }
	// rep(i,0,strong.size())
	// 	se.insert(strong[i]);
	// if(se.size()!=1)
	// {
	// 	cout << -1 << endl;
	// 	return(0);
	// }
	if(strong.size()==1)
		cout << strong[0]+1 << " " << endl;
	else
		cout << -1 << endl;

	return(0);
}