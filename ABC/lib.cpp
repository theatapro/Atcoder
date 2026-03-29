#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

ll my_gcd(ll x, ll y)
{
	if(x % y == 0)
		return y;
	else
		return my_gcd(y, x % y);
}

ll my_lcm(ll x, ll y)
{
	return(x * y / my_gcd(x, y));
}

bool is_palindrome(string S)
{
	ll N = S.size();
	rep(i,0,N/2)
		if(S[i]!=S[N-1-i])
			return(0);
	return(1);
}

struct Mo {
	int n;
	vector< pair< int, int > > lr;

	explicit Mo(int n) : n(n) {}

	void add(int l, int r) { /* [l, r) */
		lr.emplace_back(l, r);
	}

	template< typename AL, typename AR, typename EL, typename ER, typename O >
	void build(const AL &add_left, const AR &add_right, const EL &erase_left, const ER &erase_right, const O &out) {
		int q = (int) lr.size();
		int bs = n / min< int >(n, sqrt(q));
		vector< int > ord(q);
		iota(begin(ord), end(ord), 0);
		sort(begin(ord), end(ord), [&](int a, int b) {
			int ablock = lr[a].first / bs, bblock = lr[b].first / bs;
			if(ablock != bblock) return ablock < bblock;
			return (ablock & 1) ? lr[a].second > lr[b].second : lr[a].second < lr[b].second;
		});
		int l = 0, r = 0;
		for(auto idx : ord) {
			while(l > lr[idx].first) add_left(--l);
			while(r < lr[idx].second) add_right(r++);
			while(l < lr[idx].first) erase_left(l++);
			while(r > lr[idx].second) erase_right(--r);
			out(idx);
		}
	}

	template< typename A, typename E, typename O >
	void build(const A &add, const E &erase, const O &out) {
		build(add, add, erase, erase, out);
	}
};

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

void topologycal_dfs(vector<vector<int> > &G, vector<bool> &check, vector<int> &ans, int from)
{
	check[from] = true;
	for (auto to : G[from])
	{
		if (check[to] == false)
			topologycal_dfs(G, check, ans, to);
	}
	ans.push_back(from);
	return;
}

void topologycal_sort(vector<vector<int> > &G, vector<bool> &check, vector<int> &ans)
{
	for (int i = 0; i < G.size(); i++)
		sort(G[i].begin(),G[i].end());
	for (int i = 0; i < G.size(); i++)
	{
		if (check[i])
			continue;
		topologycal_dfs(G, check, ans, i);
	}
	reverse(ans.begin(),ans.end());
	return;
}



int	main(void)
{
	string S;
	cin >> S;
	cout << is_palindrome(S);
	// int N, M;
	// cin >> N >> M;
	// vector<vector<int> > Graph(N);
	// rep(i, 0, M)
	// {
	// 	int a, b;
	// 	cin >> a >> b;
	// 	Graph[a].push_back(b);
	// }
	// vector<int> ans;
	// vector<bool> check(N);
	// topologycal_sort(Graph, check, ans);
	// rep(i, 0, N)
	// 	cout << ans[i] << " " << endl;

return (0);

}