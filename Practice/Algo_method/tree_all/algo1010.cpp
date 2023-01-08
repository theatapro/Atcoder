#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
typedef long long ll;
using namespace std;

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
	int N, M;
	tuple<int,int,int> tup;
	cin >> N >> M;
	UnionFind uf(N);
    vector<edge> segment_list(M);
	vector<bool> flag(M);

	priority_queue<int, vector<int>, greater<int> > pq;

	rep(i, 0, M)
	{
		cin >> segment_list[i].from >> segment_list[i].to >> segment_list[i].leng;
		pq.push(segment_list[i].leng);
	}

	int ans = 0;

    while(!pq.empty())
	{
		int mind = pq.top();
		pq.pop();
		rep(i, 0, M)
			if(segment_list[i].leng == mind && !flag[i])
			{
				int u = segment_list[i].from;
				int v = segment_list[i].to;
				flag[i] = true;
				if(!uf.issame(u, v))
				{
					ans += segment_list[i].leng;
					uf.unite(u, v);
					// cout << u << " : " << v << endl;
				}
				break;
			}
	}
    
    cout << ans << endl;
	return(0);
}