#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;
using P = pair<int, int>;

void	rec(int n, vector<P> &tree)
{
	if (tree[n].first != -1)
		rec(tree[n].first, tree);
	cout << n << " ";
	if (tree[n].second != -1)
		rec(tree[n].second, tree);
}

int main(void)
{
	int N;
	cin >> N;
	vector<P> tree(N);

	rep(i, 0, N)
	{
		int l, r;
		cin >> l >> r;
		tree[i].first = l;
		tree[i].second = r;
	}
	rec(0,tree);
}