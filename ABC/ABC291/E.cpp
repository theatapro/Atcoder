#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{
	int N, M;
	cin >> N >> M;
	deque<int> deq;
	set<int> s;

	int X, Y;
	cin >> X >> Y;
	deq.push_front(X);
	deq.push_back(Y);
	s.insert(X);
	s.insert(Y);

	vector<P> xy_vec;

	rep(i, 1, M)
	{
		cin >> X >> Y;
		xy_vec.push_back({X,Y});
	}
	while(1)
	{
		bool flag = false;
		rep(i,0,xy_vec.size())
		{
			if (xy_vec[i].second == deq.front() && !s.count(xy_vec[i].first))
			{
				deq.push_front(xy_vec[i].first);
				xy_vec[i] = {-1,-1};
				flag = true;
			}
			if (xy_vec[i].first == deq.back()&& !s.count(xy_vec[i].second))
			{
				deq.push_back(xy_vec[i].second);
				xy_vec[i] = {-1,-1};
				flag = true;
			}
		}
		if(!flag)
			break;
	}
	if (deq.size() != N)
	{
		cout << "No" << endl;
		return(0);
	}
	cout << "Yes" << endl;
	vector<int> ans(N);
	for (int i = N; i > 0 ;i--)
	{
		int p = deq.front();
		ans[p-1] = i;
		deq.pop_front();
	}
	for (int i = N - 1; i >= 0 ;i--)
		cout << ans[i] << " ";
	return(0);
}
