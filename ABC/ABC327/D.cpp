#include <bits/stdc++.h>
// #include <atcoder/all>
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
	vector<vector<int>> G(N);   // グラフを表現する隣接リスト
	vector<int> A(M);
	vector<int> B(M);
	rep(i,0,M)
		cin >> A[i];
	rep(i,0,M)
		cin >> B[i];
    for(int i = 0; i < M; ++i) {
        int a, b;
		a = A[i];
		b = B[i];
		a--;b--;
        G[a].push_back(b);
        // 無向グラフのため、頂点 b から頂点 a への辺も張る
        G[b].push_back(a);
    }

    vector<int> color(N, -1);   // color[v]：頂点 v の色が黒なら 1, 白なら 0, 未探索なら -1
    string ans = "Yes";
    // 全ての頂点について
    for(int v = 0; v < N; ++v) {
        // 頂点 v がすでに訪問済みであれば、スキップ
        if(color[v] != -1) {continue;}
        // そうでなければ、頂点 v を含む連結成分は未探索
        // 頂点 v の色を白で決め打ちしたうえで、幅優先探索を行う
        queue<int> que; // 探索候補の頂点番号を入れるキュー
        color[v] = 0;
        que.push(v);
        // キューに要素が残っている限り
        while(que.size() > 0) {
            int qv = que.front();
            que.pop();
            // 頂点 qv に隣接している頂点 nv について、
            for(auto nv : G[qv]) {
                // nv がすでに探索済みならば、スキップする
                if(color[nv] != -1) {
                    // 隣り合う頂点どうしが同じ色なら、答えは No
                    if(color[nv] == color[qv]) {ans = "No";}
                    continue;
                }
                // そうでなければ、頂点 nv の色を color[qv] と逆にしたうえで、nv も探索候補に入れる
                color[nv] = 1 - color[qv];
                que.push(nv);
            }
        }
    }
    // 答えを出力する
    cout << ans << endl;

	return(0);	
}
