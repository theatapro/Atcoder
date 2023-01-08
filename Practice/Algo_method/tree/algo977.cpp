#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<vector<int> > G(N);

	rep(i, 0, N - 1)
	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	vector<int> dist(N, -1);
	queue<int> que;
	int max_depth = 0;
	int edge_A;

	dist[0] = 0;
	que.push(0);

	while(!que.empty())
	{
		int v = que.front();
		que.pop();
		for(auto nv: G[v])
		{
			if(dist[nv] == -1)
			{
				dist[nv] = dist[v] + 1;
				max_depth = max(dist[nv], max_depth);
				if(max_depth == dist[nv])
					edge_A = nv;
				que.push(nv);
			}
		}
	}

	max_depth = 0;
	vector<int> A_dist(N, -1);
	queue<int> A_que;
	int edge_B;

	A_dist[edge_A] = 0;
	A_que.push(edge_A);

	while(!A_que.empty())
	{
		int v = A_que.front();
		A_que.pop();
		for(auto nv: G[v])
		{
			if(A_dist[nv] == -1)
			{
				A_dist[nv] = A_dist[v] + 1;
				max_depth = max(A_dist[nv], max_depth);
				if(max_depth == A_dist[nv])
					edge_B = nv;
				A_que.push(nv);
			}
		}
	}
	int ans;
	if(max_depth % 2 == 0)
		ans = max_depth / 2;
	else
		ans = (max_depth / 2) + 1;
	cout << ans << endl;

	// vector<int> B_dist(N, -1);
	// queue<int> B_que;

	// B_dist[edge_B] = 0;
	// B_que.push(edge_B);

	// while(!B_que.empty())
	// {
	// 	int v = B_que.front();
	// 	B_que.pop();
	// 	for(auto nv: G[v])
	// 	{
	// 		if(B_dist[nv] == -1)
	// 		{
	// 			B_dist[nv] = B_dist[v] + 1;
	// 			B_que.push(nv);
	// 		}
	// 	}
	// }

	// int max_dis = A_dist[edge_B];
	// int ans;

	// rep(i, 0, N)
	// {
	// 	if(max_dis % 2 == 0)
	// 		if(A_dist[i] == max_dis / 2 && B_dist[i] == max_dis / 2)
	// 			ans = i;
	// 	else
	// 		if(A_dist[i] == max_dis / 2 && B_dist[i] == (max_dis / 2) + 1)
	// 			ans = i;
	// }
	return(0);
}