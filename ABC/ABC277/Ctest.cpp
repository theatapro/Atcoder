#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int main(void)
{
	int N;
	cin >> N;
	map<int, int> stair;
	map<int, int> inv_stair;
	stair[0] = 1;
	inv_stair[1] = 0;
	vector< vector<int> > graph(2*N);

	int index = 1;
	int	A;
	int B;
	rep(i, 0, N)
	{
		cin >> A;
		if(!inv_stair.count(A))
		{
			stair[index] = A;
			inv_stair[A] = index;
			index++;
		}

		cin >> B;
		if(!inv_stair.count(B))
		{
			stair[index] = B;
			inv_stair[B] = index;
			index++;
		}
		graph.at(inv_stair[A]).push_back(inv_stair[B]);
		graph.at(inv_stair[B]).push_back(inv_stair[A]);
	}


	vector<int> check_list(2*N,-1);
	queue<int> que;

	check_list.at(0) = 1;
	que.push(0);
	int	max_height = 1;

	while (!que.empty())
	{
		int	reg = que.front();
		que.pop();

		for (auto nreg : graph.at(reg))
		{
			if(check_list.at(nreg) == -1)
			{
				que.push(nreg);
				check_list.at(nreg) = 1;
				max_height = max(max_height, stair[nreg]);
			}
		}
	}

	cout << max_height << endl;
}
