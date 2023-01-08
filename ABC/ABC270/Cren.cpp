#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	int n, x, y;
	cin >> n >> x >> y;
	vector<vector<int> > to(n+1);
	rep(i, 0, n - 1)
	{
		int a, b;
		cin >> a >> b;
		to[a].push_back(b);
		to[b].push_back(a);
	}

	vector<int> ans;
	auto dfs = [&](auto f, int v, int p = -1) -> bool
	{
		if(v == x)
		{
			ans.push_back(v);
			return true;
		}
		for(int u : to[v])
		{
			if(u == p) continue;
			if(f(f, u, v))
			{
				ans.push_back(v);
				return true;
			}
			
		}
		return false;
	};
	dfs(dfs, y);

	rep(i, 0, ans.size())
		cout << ans[i] << " ";
	cout << endl;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];
bool visited[100009]; // 頂点 x が青色の場合、visited[x] = true

void dfs(int pos) { // pos は現在位置
	visited[pos] = true;
	for (int i = 0; i < G[pos].size(); i++) {
		int nex = G[pos][i];
		if (visited[nex] == false) dfs(nex);
	}
	return;
}

int main() {
	// 入力
	cin >> N >> M;
	for (int i = 1; i <= M; i++) {
		cin >> A[i] >> B[i];
		G[A[i]].push_back(B[i]);
		G[B[i]].push_back(A[i]);
	}

	// 深さ優先探索
	for (int i = 1; i <= N; i++) visited[i] = false;
	dfs(1);

	// 答えの出力
	string Answer = "The graph is connected.";
	for (int i = 1; i <= N; i++) {
		if (visited[i] == false) Answer = "The graph is not connected.";
	}
	cout << Answer << endl;
	return 0;
}