#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int H, W;


bool valid(int nx, int ny)
{
	if((0 <= nx && nx < H) && 0 <= ny && ny < W)
		return(true);
	return(false);
}

void sol(vector<vector<char> > &G, int x, int y,vector<int> &dist)
{
	queue<pair<int,int>	> que;
	que.push(make_pair(x,y));
	dist[x*W + y] = 0;

	while(!que.empty())
	{
		pair<int, int> p;
		p = que.front();

		que.pop();
		rep(i,0,4)
		{
			int np_x = p.first + dx[i];
			int	np_y = p.second+ dy[i];
			if(valid(np_x , np_y))
			{
				if(dist[(np_x)*W + np_y] == -1 && G[np_x][np_y] == 'W')
				{
					dist[(np_x)*W + np_y] = dist[p.first*W + p.second] + 1;
					que.push(make_pair(np_x, np_y));
				}
			}

		}
	}
	return;
}

int main(void)
{
	cin >> H >> W;
	vector<vector<char> > G(H, vector<char>(W));
	vector<int> dist(H*W, -1);
	int x0,y0,x1,y1;
	cin >> x0 >> y0 >> x1 >> y1;

	rep(i, 0, H)
		rep(j,0,W)
			cin >> G[i][j];

	sol(G,x0,y0,dist);

	int ans = 0;
	ans = dist[x1*W + y1];

	cout << ans <<endl;

	return(0);
}