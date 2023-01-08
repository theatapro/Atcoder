#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;


int main(void)
{
	int N, X, Y;
	cin >> N >> X >> Y;
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

	vector<int> check(N, -1);
	vector<int> root;
	queue<int> que;

	// root.push_back(X - 1);
	check.at(X - 1) = 1;
	que.push(X - 1);

}