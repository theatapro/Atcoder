#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
typedef long long ll;
using namespace std;

using T = tuple<int,int,int>;

// Union-Find
struct UnionFind {
    vector<int> par, rank, siz;

    // 構造体の初期化
    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) { }

    // 根を求める
    int root(int x) {
        if (par[x]==-1) return x; // x が根の場合は x を返す
        else return par[x] = root(par[x]); // 経路圧縮
    }

    // x と y が同じグループに属するか (= 根が一致するか)
    bool issame(int x, int y) {
        return root(x)==root(y);
    }

    // x を含むグループと y を含むグループを併合する
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

    // x を含む根付き木のサイズを求める
    int size(int x) {
        return siz[root(x)];
    }
};

struct edge {
	int from;
	int to;
	int leng;
};

int	main(void)
{
	int N, M, K;
	cin >> N >> M >> K;
	if(K >= N)
	{
		cout << "-1" << endl;
		return(0);
	}

	UnionFind uf(N);
	priority_queue<T, vector<T>, greater<T> > pq;

	rep(i, 0, M)
	{
		int len, u, v;
		cin >> u >> v >> len;
		pq.push({len, u, v});
	}

	int ans = 0;

    while(K > 0)
	{
		// int mind = get<0>(pq.top());
		// int minu = get<1>(pq.top());
		// int minv = get<2>(pq.top());
		auto [mind, minu, minv] = pq.top();
		// cout << " min " <<mind << " " << minu << " " << minv << endl;
		pq.pop();
		if(!uf.issame(minu, minv))
		{
			ans += mind;
			uf.unite(minu, minv);
			K--;
		}
	}
    
    cout << ans << endl;
	return(0);
}