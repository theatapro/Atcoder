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
	priority_queue<P, vector<P>, greater<P> > queue;
	priority_queue<P> queue_g;

	
	set<P> already;
	ll N,M;
	cin >> N >> M;
	vector<ll> ini(N,0);
	vector<ll> gyo(N);
	vector<vector<ll>> kkk(N,vector<ll>());
	vector<ll> gyo_li(N);
	

	rep(i,0,M)
	{
		int A,B;
		cin >> A >> B;
		A--;
		B--;
		ini[B]++;
		gyo[A]++;
		kkk[A].push_back(B);
		// queue.push(make_pair(A,B));
		already.insert(make_pair(A,B));
		gyo_li.push_back(B);
	}
	rep(i,0,N)
	{
		queue.push(make_pair(ini[i],i));
		queue_g.push(make_pair(ini[i],i));
	}

	cout << N*M << endl;
	rep(i,0,N)
	{
		ll set_cnt = M - gyo[i];
		for(auto j:kkk[i])
			cout << i+1 << " " << j+1 << endl;
		// cout << "setcnt" << set_cnt << endl;

		if(set_cnt<=0)
			continue;
		else
		{
			ll cnt = 0;
			vector<P> gabage;
			vector<P> gabage_g;

			for(auto f : gyo_li)
			{
				P get_j = queue_g.top();
				ll j_cnt = get_j.first;
				// cout << "j_cnt" << j_cnt <<endl;
				ll j = get_j.second;
				if(already.count(make_pair(i,j)))
				{
					// cout << i+1 << " "<< j+1 << endl;
					gabage_g.push_back(make_pair(j_cnt,j));
					// cnt++;
					queue_g.pop();
				}
				else
				{
					queue_g.pop();
					j_cnt++;
					queue_g.push(make_pair(j_cnt,j));
					cnt++;
					cout << i+1 << " "<< j+1 << endl;
				}
			}
			for(auto pair : gabage_g)
				queue_g.push(pair);
			while(cnt<set_cnt)
			{
				
				P get_j = queue.top();
				ll j_cnt = get_j.first;
				cout << "j_cnt" << j_cnt <<endl;
				ll j = get_j.second;
				if(already.count(make_pair(i,j)))
				{
					// cout << i+1 << " "<< j+1 << endl;
					gabage.push_back(make_pair(j_cnt,j));
					// cnt++;
					queue.pop();
				}
				else
				{
					queue.pop();
					j_cnt++;
					queue.push(make_pair(j_cnt,j));
					cnt++;
					cout << i+1 << " "<< j+1 << endl;
				}
			}
			for(auto pair : gabage)
				queue.push(pair);
			
		}
	}

	return(0);
}