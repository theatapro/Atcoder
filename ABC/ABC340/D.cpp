#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;


// 辺情報を表す構造体
struct edge {
    ll to;     // 辺の終点
    ll leng;   // 辺の重み
};


int main() {
    // 入力を受け取る
    int N;
	cin >> N;
    vector<vector<edge>> G(N);  // G[i]：頂点 i を始点とする辺情報を格納する
    for(int i = 0; i < N-1; ++i) {
        ll A, B, X; cin >> A >> B >> X;
		X--;
        G[i].push_back({i+1, A});
		if(i!=X)
        	G[i].push_back({X, B});
    }

	vector<ll> dist(N, LINF);   // dist[i]：頂点 0 から頂点 i への暫定的な経路長
    dist[0] = 0;
    vector<bool> done(N, false);    // done[i]：頂点 i の最短距離が確定しているか

    // (仮の最短距離、頂点番号) を管理するヒープ
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    
    // ヒープに最初の時点における情報を入れておく
    for(ll v = 0; v < N; ++v) {
        pq.emplace(dist[v], v);
    }

    while(pq.size() > 0) {
        // ヒープの先頭要素を取り出す (v は頂点番号、d は 0 → v の仮の最短距離)
		ll d = pq.top().first;
		ll v = pq.top().second;

        // auto [d, v] = pq.top();
        pq.pop();
        // 頂点 v の最短距離がすでに確定しているなら、何もしない
        if(done[v]) {continue;}

        // 頂点 v を始点とする辺 e について、更新を行う
        for(auto e : G[v]) {
            if(dist[e.to] > dist[v] + e.leng) {
                // 距離の更新がある場合には、ヒープに更新後の情報を入れる
                dist[e.to] = dist[v] + e.leng;
                pq.emplace(dist[e.to], e.to);
            }
        }
        // 頂点 v の最短距離を確定させる
        done[v] = true;
    }

    // 答えを出力する
    // for(int i = 0; i < N; ++i) {
        cout << dist[N-1] << endl;
    // }
    
	return 0;
}

// int	main(void)