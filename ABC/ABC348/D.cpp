#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int H, W;

bool valid(int nx, int ny)
{
	if((0 <= nx && nx < H) && 0 <= ny && ny < W)
		return(true);
	return(false);
}

void sol(vector<vector<char> > &G, int x, int y,vector<P> &dist)
{
	queue<pair<int,int>	> que;
	que.push(make_pair(x,y));
	dist[x*W + y].first = 0;
	// dist[x*W + y].second = 0;

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
				// if(dist[(np_x)*W + np_y].second)
				if(dist[(np_x)*W + np_y].second<=dist[p.first*W + p.second].second - 1)
					dist[(np_x)*W + np_y].second = dist[p.first*W + p.second].second - 1;
				if(dist[(np_x)*W + np_y].first == -1 && G[np_x][np_y] == '.')
				{
					dist[(np_x)*W + np_y].first = dist[p.first*W + p.second].first + 1;
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
	vector<P> dist(H*W, make_pair(-1,-1));
	int x_s,y_s,x_t,y_t;
	// cin >> x0 >> y0 >> x1 >> y1;

	rep(i, 0, H)
		rep(j,0,W)
		{ 
			char c;
			cin >> c;
			if(c!='#')
			{
				G[i][j] = '.';
			}
			else
			{
				G[i][j] = '#';
			}

			if(c=='S')
			{
				x_s=i;
				y_s=j;
			}
			if(c=='T')
			{
				x_t=i;
				y_t=j;
			}
		}

	// cout << x_s << y_s << endl;
	int N;
	cin >> N;
	// map<int,int> energy;
	rep(i,0,N)
	{
		int x,y,E;
		cin >> x >> y >> E;
		x--;y--;
		dist[x*W+y].second=E;
	// cout <<x <<y<<dist[x*W+y].second <<endl;

	}
	// int ans = dist[x_s*W + y_s].second;

	// cout << ans <<endl;
	sol(G,x_s,y_s,dist);

	int ans = -1;
	ans = dist[x_t*W+y_t].second;
	if(ans>=0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return(0);
}