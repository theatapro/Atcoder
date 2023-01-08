#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
typedef long long ll;
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector< vector<int> > graph(N);

	int	A;
	int B;
	rep(i, 0, N - 1)
	{
		cin >> A >> B;
		A--;
		B--;
		graph.at(A).push_back(B);
		graph.at(B).push_back(A);
	}

	vector<int> dist(N, -1);
	queue<int> que;

	dist.at(0) = 0;
	que.push(0);
	int	max_dis = 0;
	int	far_p = 0;

	while (!que.empty())
	{
		int	reg = que.front();
		que.pop();

		for (auto nreg : graph.at(reg))
		{
			if(dist.at(nreg) == -1)
			{
				que.push(nreg);
				dist.at(nreg) = dist.at(reg) + 1;
				max_dis = max(max_dis, dist.at(nreg));
				if (max_dis == dist.at(nreg))
					far_p = nreg;
			}
		}
	}
	
//
	vector<int> n_dist(N, -1);

	n_dist.at(far_p) = 0;
	que.push(far_p);
	max_dis = 0;
	int	far_far_p = 0;

	while (!que.empty())
	{
		int	reg = que.front();
		que.pop();

		for (auto nreg : graph.at(reg))
		{
			if(n_dist.at(nreg) == -1)
			{
				que.push(nreg);
				n_dist.at(nreg) = n_dist.at(reg) + 1;
				max_dis = max(max_dis, n_dist.at(nreg));
			}
		}
	}
	cout << max_dis + 1 << endl;
	return (0);
}
