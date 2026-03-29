#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int DIV = 1e8;

using namespace std;
using P = pair<ll, ll>;

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
	int T;
	cin >> T;
	rep(i,0,T){
		int N,D;
		cin >> N >> D;
		vector<int> A(N);
		vector<int> B(N);
		rep(j,0,N){
			int a;
			cin >> A[j];
		}
		rep(j,0,N){
			int B;
			cin >> B;
		}
		int nd=0;
		rep(j,0,N){
			//noon
			if(A[nd]>B[j]) A[nd]-=B[j];
			else{
				while(A[nd]<B[j]){
					B[j]-=A[nd];A[nd]=0;
					nd++;
				}
				A[nd]-=B[j];
			}
			//night
			if(j-D>=0)
				A[j-D]=0;
			if(A[nd]==0)
				nd++;
		}
		int ans = 0;
		rep(k,nd,N)
			ans +=A[k];
		cout << ans <<endl;
	}
	
	return(0);
}