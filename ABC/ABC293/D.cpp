#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

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

bool check_wa(int ini, vector<P> &Rope, UnionFind &G)
{
	int now = ini;
	cout << "size : " << G.size(ini) << endl;
	rep(i,0,G.size(ini)+1)
	{
		int nex = Rope[now].first;
		// cout << "first" << nex << endl;
		if (nex== -1)
			return(false);
		now = nex;
	}
	now = ini;
	rep(i,0,G.size(ini)+1)
	{
		int nex = Rope[now].second;
		// cout << "second" << nex << endl;
		if (nex== -1)
			return(false);
		now = nex;
	}
	return (true);
}

int	main(void)
{
	int N, M;
	cin >> N >> M;
	UnionFind G(N+1);
	vector<P> Rope(N+1);
	rep(i,1,N+1)
		Rope[i] = {-1,-1};
	if (M==0)
	{
		cout << 0 << " " << N << endl;
		return(0);
	}
	rep(i,0,M)
	{
		int u,v;
		char u_c, v_c;
		cin >> u >> u_c >> v >> v_c;
		if (!G.issame(u,v))
			G.unite(u,v);
		if (u_c == 'R')
			Rope[u].first = v;
		if (u_c == 'B')
			Rope[u].second = v;
		if (v_c == 'R')
			Rope[v].first = u;
		if (v_c == 'B')
			Rope[v].second = u;

		//
	}
	set<int> checked_root;
	int X = 0;
	int Y = 0;
	rep(i,1,N + 1)
	{
		if (checked_root.count(G.root(i)))
			continue;
		cout << "par : "<<i ;
		checked_root.insert(G.root(i));
		if (check_wa(G.root(i),Rope,G))
			X++;
		Y++;
	}
	
	cout << X << " " << Y - X << endl;
	return(0);
}
