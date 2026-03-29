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

double distance(P p1,P p2){
	double dis = 0;
	double dx = abs(p1.first - p2.first);
	double dy = abs(p1.second - p2.second);
	dis = sqrt(dx*dx+dy*dy);
	return (dis);


}
int	main(void)
{	
	int N;
	cin >> N;
	vector<P> p(N);
	rep(i,0,N)
	{
		int X,Y;
		cin >>X>>Y;
		p[i].first = X;
		p[i].second = Y;
	}
	rep(i,0,N)
	{
		double max_dis = 0;
		int ans = i;
		rep(j,0,N)
		{
			double dis = distance(p[i],p[j]);
			if(dis>max_dis)
			{
				max_dis=dis;
				ans = j+1;
			}

		}
		cout << ans << endl;
	}
}