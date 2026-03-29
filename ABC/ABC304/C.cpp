#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

bool check_atcoder(char c)
{
	if(c == 'a' || c == 't' ||c == 'c' ||c == 'o' ||c == 'd' ||c == 'e' ||c == 'r')
		return(true);
	return(false);
}

int main(void)
{
	int N;
	double D;
	cin >> N >>D;
	vector<P> dist_vec(N);
	rep(i,0,N)
		cin >> dist_vec[i].first >> dist_vec[i].second;
	vector<bool> positive(N);
	vector<set<int> > d_list(N);
	rep(i,0,N)
	{
		rep(j,0,N)
		{
			int dx = abs(dist_vec[i].first - dist_vec[j].first);
			int dy = abs(dist_vec[i].second - dist_vec[j].second);
			double dist = sqrt(dx*dx+dy*dy);
			if(dist <= D)
				d_list[i].insert(j);
		}
	}
	queue<int> que;
	que.push(0);
	set<int> seen;
	seen.insert(0);
	positive[0] = true;
	while(!que.empty())
	{
		int p = que.front();
		que.pop();
		for(auto np : d_list[p])
		{
			if(seen.count(np))
				continue;
			que.push(np);
			seen.insert(np);
			positive[np] = true;
		}
	}
	rep(i,0,N)
	{
		if(positive[i])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return(0);
}
