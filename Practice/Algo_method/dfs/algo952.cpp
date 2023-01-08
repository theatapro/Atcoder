#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = l; i < (r); i++)

using namespace std;

// rec(頂点 v):
//     頂点 v を黒く塗る
//     頂点 v の頂点番号を出力する
//     for v2 in G[v]:
//         if 頂点 v2 がすでに黒く塗られている:
//             continue
//         rec(頂点 v2)
vector<vector<int> > G(105);
vector<bool> seen(105);

void	rec(int v)
{
	seen[v] = true;
	cout << v << " ";
    for (auto v2 : G[v])
	{
        if (seen[v2])
            continue;
        rec(v2);
	}
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	int a, b;
	rep(i, 0, M)
	{
		cin >> a >> b;
		G[a].push_back(b);
		sort(G[a].begin(), G[a].end());
	}
	rec(0);
}