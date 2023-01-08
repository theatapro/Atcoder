#include <bits/stdc++.h>
#define rep(i, l, r) for(ll i = (l); i < (r); i++)
typedef long long ll;
using namespace std;

// Union-Find
struct UnionFind {
    vector<ll> par, rank, siz, min_num;

    // 構造体の初期化
    UnionFind(ll n) : par(n,-1), rank(n,0), siz(n,1), min_num(n)
	{ 
		rep(i, 0, n)
			min_num[i] = i;
	}

    // 根を求める
    ll root(ll x) {
        if (par[x]==-1) return x; // x が根の場合は x を返す
        else return par[x] = root(par[x]); // 経路圧縮
    }

    // x と y が同じグループに属するか (= 根が一致するか)
    bool issame(ll x, ll y) {
        return root(x)==root(y);
    }

    // x を含むグループと y を含むグループを併合する
    bool unite(ll x, ll y) {
        ll rx = root(x), ry = root(y); // x 側と y 側の根を取得する
        if (rx==ry) return false; // すでに同じグループのときは何もしない
        // union by rank
        if (rank[rx]<rank[ry]) swap(rx, ry); // ry 側の rank が小さくなるようにする
        par[ry] = rx; // ry を rx の子とする
        if (rank[rx]==rank[ry]) rank[rx]++; // rx 側の rank を調整する
        siz[rx] += siz[ry]; // rx 側の siz を調整する
		min_num[rx] = min(min_num[rx], min_num[ry]);
        return true;
    }

    // x を含む根付き木のサイズを求める
    ll size(ll x) {
        return siz[root(x)];
    }

	ll find_min(ll x)
	{
		return min_num[root(x)];
	}

};

int	main(void)
{
	ll N, M;
	cin >> N >> M;
	UnionFind uf(N);

	rep(i, 0, M)
	{
		ll A, B;
		cin >> A >> B;
        uf.unite(A, B);
	}

	rep(i, 0, N)
		cout << uf.find_min(i) << endl;

	return(0);
}