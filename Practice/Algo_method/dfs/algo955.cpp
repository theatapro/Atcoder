#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = l; i < (r); i++)

using namespace std;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

bool	valid_point(int H, int W, int p)
{
	if(0 <= p && p < H * W)
		return true;
	return false;
}

bool	f(vector<int> point, int i, int j,int H, int W)
{
	if(valid_point(H, W, i + dx[j] + W * dy[j]))
	{
		if(point[i + dx[j] + W * dy[j]] == 1)
		{
			if(j == 0 && (i + 1) % W == 0)
				return false;
			if(j == 1 && (i - 1) % W == W - 1)
				return false;
			return true;
		}
	}
	return false;
}

void	make_graph(vector<int> point, vector<vector<int> > &G, int H, int W)
{
	rep(i, 0, H * W)
		if(point[i] == 1)
			rep(j,0,4)
				if(f(point, i, j, H, W))
					G[i].push_back(i + dx[j] + W * dy[j]);
}

void	rec(int v,vector<vector<int> > &G,vector<bool> &seen)
{
	seen[v] = true;
	// cout << v << " ";
    for (auto v2 : G[v])
	{
        if (seen[v2])
            continue;
        rec(v2, G, seen);
	}
}

int main(void)
{
	int H, W;
	cin >> H >> W;
	vector<vector<int> > G(H * W);
	vector<bool> seen(H * W);
	char info;
	vector<int> point(H * W);
	int ans = 0;
	rep(i, 0, H * W)
	{
		cin >> info;
		if(info == '#')
			point[i] = 1;
	}

	make_graph(point, G, H, W);

	rep(i, 0, H * W)
	{
		if(point[i] == 1)
		{
			if(!seen[i])
			{
				rec(i, G, seen);
				ans++;
			}
		}
	}

	cout << ans << endl;
}