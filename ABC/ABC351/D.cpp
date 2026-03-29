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
using P = pair<ll, ll>;

bool valid_move(ll i,ll j, ll H, ll W)
{
	if(i>=H || j>=W || i<0 || j<0)
		return(false);
	return(true);
}

bool check_mg(vector<string> &S, ll i, ll j)
{
	int di[4] = {1,0,-1,0};
	int dj[4] = {0,1,0,-1};
	rep(dir,0,4)
	{
		int I = i+di[dir];
		int J = j+dj[dir];
		if(valid_move(I,J,S.size(),S[0].size()))
			if(S[I][J]== '#')
				return(true);
	}
	return(false);
}

int main(void)
{
	ll H,W;
	cin >> H >> W;
	vector<string> S(H);
	rep(i,0,H)
		cin >> S[i];
	
	set<P> ar_mg;
	set<P> no_mg;
	int di[4] = {1,0,-1,0};
	int dj[4] = {0,1,0,-1};
	rep(i,0,H)rep(j,0,W)
	{
		if(S[i][j]=='#')
			continue;
		bool ins=false;
		rep(dir,0,4)
		{
			int I = i+di[dir];
			int J = j+dj[dir];
			if(valid_move(I,J,S.size(),S[0].size()))
				if(S[I][J]== '#')
				{
					ar_mg.insert(make_pair(i,j));
					ins = true;
					break;
				}
		}
		if(!ins)
			no_mg.insert(make_pair(i,j));
		// if(check_mg(S,i,j))
		// 	ar_mg.insert(make_pair(i,j));
		// else
		// 	no_mg.insert(make_pair(i,j));
	}
	vector<vector<bool> > seen(H,vector<bool>(W,false)); 
	// set<ll> seen;
	ll ans = 1;
	for(auto a : no_mg)
	{
		if(seen[a.first][a.second])
			continue;
		seen[a.first][a.second] = true;
		// seen.insert(a);
		queue<P> que;
		que.push(a);
		ll reachable_cnt = 1;
		set<P> seeeeen;
		seeeeen.insert(a);
		while(!que.empty())
		{
			// int di[4] = {1,0,-1,0};
			// int dj[4] = {0,1,0,-1};
			P now = que.front();
			que.pop();
			rep(dir,0,4)
			{
				int I = now.first+di[dir];
				int J = now.second+dj[dir];
				if(!valid_move(I,J,H,W))
					continue;
				P next = make_pair(I,J);
				if(!seeeeen.count(next))
				{
					if(S[I][J]=='#')
						continue;
					if(ar_mg.count(next))
					{
						seeeeen.insert(next);
						reachable_cnt++;
					}
					else
					{
						seen[next.first][next.second] = true;
						seeeeen.insert(next);
						que.push(next);
						reachable_cnt++;
					}
				}
			}
		}
		ans = max(ans,reachable_cnt);
	}
	cout << ans << endl;
	return(0);
}