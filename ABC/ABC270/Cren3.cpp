#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

vector<vector<int> >	Graph(200009);
int N, X, Y;
vector<int> ans, last_ans;
vector<bool> Judge(200009);

void	dfs(int x)
{
	if(x == Y)
	{
		last_ans = ans;
		return;
	}
	Judge[x] = true;
	rep(i, 0, Graph[x].size())
	{
		if(Judge[Graph[x][i]] == false)
		{
			ans.push_back(Graph[x][i]);
			dfs(Graph[x][i]);
			ans.pop_back();
		}
	}
	return;
}

int	main(void)
{
	cin >> N;
	cin >> X >> Y;

	int A, B;
	rep(i, 0, N - 1)
	{
		cin >> A >> B;
		Graph[A].push_back(B);
		Graph[B].push_back(A);
	}
	ans.push_back(X);
	dfs(X);

	rep(i, 0, last_ans.size())
	{
		cout << last_ans.at(i) << " ";
	}

	cout << endl;
}