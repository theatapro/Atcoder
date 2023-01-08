#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int N, M, A[200009], B[200009];
int n, x, y;
vector<int> G[200009];
bool visited[200009]; // 頂点 x が青色の場合、visited[x] = true
vector<int> ans,last_ans;

void dfs(int pos)
{ // pos は現在位置
	if(pos == y)
	{
		last_ans = ans;
		return;
	}

	visited[pos] = true;
	for (int i = 0; i < G[pos].size(); i++)
	{
		int nex = G[pos][i];
		if (visited[nex] == false)
		{
			ans.push_back(nex);
			dfs(nex);
			ans.pop_back();
		}
	}
	return;
}

int main(void)
{
	// 入力
	// cin >> N >> M;
	cin >> n >> x >> y;
	for (int i = 1; i <= n - 1; i++) {
		cin >> A[i] >> B[i];
		G[A[i]].push_back(B[i]);
		G[B[i]].push_back(A[i]);
	}

	// 深さ優先探索
	for (int i = 1; i <= n; i++) visited[i] = false;
	ans.push_back(x);
	dfs(x);
	// 答えの出力
	rep(i, 0, last_ans.size())
		cout << last_ans[i] << " ";
	cout << endl;
	// string Answer = "The graph is connected.";
	// for (int i = 1; i <= N; i++) {
	// 	if (visited[i] == false) Answer = "The graph is not connected.";
	// }
	// cout << Answer << endl;
	return 0;
}