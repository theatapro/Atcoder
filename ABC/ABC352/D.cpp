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

int main(void)
{
	ll N,K;
	cin >> N >> K;
	vector<int> P(N);
	vector<int> pos(N);
	rep(i,0,N)
	{
		cin >> P[i];
		P[i]--;
		pos[P[i]]=i;
	}
	vector<int> pos_min(N-K+1);
	vector<int> pos_max(N-K+1);
	int ini_min = INF;
	int ini_max = -1;
	priority_queue<int, vector<int>, greater<int>> pq_min;
	priority_queue<int> pq_max;
	set<int> now_set;
	rep(i,0,K)
	{
		ini_min = min(ini_min,pos[i]);
		ini_max = max(ini_max,pos[i]);
		pq_min.push(pos[i]);
		pq_max.push(pos[i]);
		now_set.insert(pos[i]);
	}
	pos_min[0]=ini_min;
	pos_max[0]=ini_max;

	rep(i,1,N-K+1)
	{
		now_set.erase(pos[i-1]);
		now_set.insert(pos[K+i-1]);
		pq_min.push(pos[K+i-1]);
		pq_max.push(pos[K+i-1]);

		while(!now_set.count(pq_min.top()))
		{
			pq_min.pop();
		}
		while(!now_set.count(pq_max.top()))
		{
			pq_max.pop();
		}
		pos_min[i]=pq_min.top();
		pos_max[i]=pq_max.top();
	}

	int ans = INF;
	// rep(i,0,N-K+1)
	// 	cout << pos_max[i] << " " <<pos_min[i]<<endl;
	rep(i,0,N-K+1)
		ans = min(ans,abs(pos_max[i]-pos_min[i]));
	cout << ans;
	return(0);
}