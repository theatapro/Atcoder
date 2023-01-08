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


// void dfs(vector<T> path, vector<bool> &flag, set<int> seen, int min_d)
// {
// 	while(!seen.empty())
// 	{
// 		rep(i, 0, M)
// 			if(min_d == path[i])
// 			{
// 				seen.erase[i];
// 			}
// 	}
// 	return;
// }

int	main(void)
{
	int N, M;
	cin >> N >> M;

	UnionFind uf(N);
	priority_queue<T, vector<T>, greater<T> > pq;

	rep(i, 0, M)
	{
		int len, u, v;
		cin >> u >> v >> len;
		pq.push({len, u, v});
	}

	int W = 0;
	auto pq_2 = pq;
	vector<int> used;
	int num = 0;
	while(!pq.empty())
	{
		auto [mind, minu, minv] = pq.top();
		// cout << " min " <<mind << " " << minu << " " << minv << endl;
		pq.pop();
		if(!uf.issame(minu, minv))
		{
			W += mind;
			uf.unite(minu, minv);
			used.push_back(num);
		}
		num ++;
	}

	int ans =  N - 1;
	
	rep(i, 0, used.size())
	{
		auto pq_i = pq_2;
		UnionFind uf_i(N);
		int non_used = used[i];
		int W_i = 0;
		int cnt = 0;

		while(!pq_i.empty())
		{
			auto [mind, minu, minv] = pq_i.top();
			// cout << " min " <<mind << " " << minu << " " << minv << endl;
			pq_i.pop();
			if(cnt == non_used)
			{
				cnt ++;
				continue;
			}
			else if(!uf_i.issame(minu, minv))
			{
				W_i += mind;
				uf_i.unite(minu, minv);
			}
			cnt ++;
		}
		if(W_i == W)
			ans--;
	}
    
    cout << ans << endl;
	return(0);
}