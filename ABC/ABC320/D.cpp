#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<ll,ll>;

struct num_pair{
	int num;
	P relative_pos;
};

int	main(void)
{
	ll N,M;
	cin >> N >> M;
	vector<P> pos(N);
	pos[0] = make_pair(0,0);
	rep(i,1,N)
		pos[i] = make_pair(LINF,LINF);
	vector<vector<num_pair> > pos_graph(N);
	rep(i,0,M)
	{
		ll A,B,X,Y;
		cin >> A >> B >> X >> Y;
		A--;B--;
		num_pair num_pair;
		num_pair.num = B;
		num_pair.relative_pos = {X,Y};
		pos_graph[A].push_back(num_pair);
		num_pair.num = A;
		num_pair.relative_pos = {-1*X,-1*Y};
		pos_graph[B].push_back(num_pair);
	}
	//bfs
	queue<ll> que;
	set<ll> seen;
	que.push(0);
	seen.insert(0);
	while(!que.empty())
	{
		ll now_pos_num = que.front();
		// cout << "now " << now_pos_num <<endl;
		P now_pos = pos[now_pos_num];
		que.pop();
		for(auto rel_pos : pos_graph[now_pos_num])
		{
			int pos_num = rel_pos.num;
			P pos_xy = rel_pos.relative_pos;
			if(seen.count(pos_num))
				continue;
			pos[pos_num] = 
			make_pair(now_pos.first+pos_xy.first,now_pos.second+pos_xy.second);
			seen.insert(pos_num);
			que.push(pos_num);
		}
	}

	rep(i,0,N)
	{
		if(pos[i].first == LINF)
			cout << "undecidable" << endl;
		else
			cout << pos[i].first  << " " << pos[i].second <<endl;
	}
	return(0);
	
}
