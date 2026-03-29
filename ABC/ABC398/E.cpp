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

using namespace std;
using P = pair<ll, ll>;


int main(void)
{
	int N;
	cin >> N;
	vector<vector<int> > G(N);
	rep(i,0,N-1)
	{
		int u,v;
		cin >> u >> v;
		u--; v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	set<P> ok;
	rep(i,0,N)
	{
		rep(j,i+1,N)
		{
			G[i].push_back(j);
			G[j].push_back(i);
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
			if(ans == "Yes")
				ok.insert(make_pair(i,j));
			G[i].erase(G[i].end());
			G[j].erase(G[j].end());
		}
	}
	cout << ok.size()<<endl;
	return(0);
}