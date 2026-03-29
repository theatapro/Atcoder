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

int	main(void)
{
	int N, M;
	cin >> N >> M;
	UnionFind G(N+1);
	// vector<vector<int> > Graph(N);
	vector<P> stock;
	if (M==0)
	{
		cout << "No" << endl;
		return(0);
	}
	rep(i,0,M)
	{
		int u,v;
		cin >> u >> v;
		if (!G.issame(u,v))
			G.unite(u,v);
		stock.push_back({u,v});
	}
	vector<int> sum(N+1);
	rep(i,0,M)
		sum[G.root(stock[i].first)]++;
	// cout << stock[1].first<< " " <<G.root(stock[1].first) << endl;
	rep(i,1,N+1)
	{
		// cout << "Debug : " << i << ":" << G.size(i) << " " << sum[i] << endl;
		if(sum[i]!=0)
		{
			if (G.size(i) != sum[i])
			{
				// cout << "Debug : "<< G.size(i) << " " << sum[i] << endl;
				cout << "No" << endl;
				return(0);
			}
		}
	}
	cout << "Yes" << endl;
	
	return(0);
}
