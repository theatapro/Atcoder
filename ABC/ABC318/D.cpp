#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
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

struct Edge {
    long long u;
    long long v;
    long long cost;
};

int	main(void)
{
	int N;
	cin >> N;
	vector<tuple<ll,ll,ll> > edges(N*(N-1)/2);
	UnionFind uf(N*(N-1)/2);

	// vector<vector<int> > nodes(N);
	int k = 0;
	rep(i,0,N)
		rep(j,i+1,N)
		{
			ll c;
			cin >> c;
			tuple<ll,ll,ll> e = make_tuple(c,i,j);
			edges[k] = e;
			k++;
		}
	sort(edges.begin(),edges.end());
	reverse(edges.begin(),edges.end());
	ll ans = 0;
	rep(i,0,edges.size())
	{
		ll cost = get<0>(edges[i]);
		ll n = get<1>(edges[i]);
		ll v = get<2>(edges[i]);
		// cout << "D " << cost <<" "<< n <<" "<< v <<endl;
		if(uf.size(n)==1 && uf.size(v)==1)
		{
			ans+=cost;
			cout <<"saiyou : " << cost<<endl;
			uf.unite(n,v);
		}
	}
	cout << ans<<endl;
	return(0);
	
}
