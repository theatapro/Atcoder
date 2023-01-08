#include <bits/stdc++.h>
#define rep(i,l,r) for(int i = (l); i < (r); i++)
using namespace std;

double dist_two_points(pair<int,int> &start,pair<int,int> &end)
{
	// double ans = 0;
	// ans = abs(start.first - end.first)*abs(start.first - end.first)
	// 	+ abs(start.second - end.second)*abs(start.second - end.second);
	// ans = sqrt(ans);
	return sqrt(pow(start.first - end.first, 2) + pow(start.second - end.second, 2));
	// return(ans);
}

int	main(void)
{
	int	N;
	cin >> N;
	vector<pair<int,int> > path_list(N);
	vector<int> flag(N,0);

	rep(i, 0, N)
		cin >> path_list.at(i).first >> path_list.at(i).second;
	
	int cnt = 0;
	int s = 0;
	double min_dist = 20000000;
	int min_j = 0;
	double ans = 0;
	flag.at(0) = 1;
	while(cnt < N - 1)
	{
		rep(j, 0, N)
		{
			if (flag.at(j) == 0)
			{
				min_dist = min(min_dist, dist_two_points(path_list.at(s),path_list.at(j)));
				if(min_dist == dist_two_points(path_list.at(s),path_list.at(j)))
					min_j = j;
			}
		}
		ans += min_dist;
		min_dist = 200000;
		flag.at(min_j) = 1;
		s = min_j;
		cnt++;
	}
	ans += dist_two_points(path_list.at(s),path_list.at(0));
	cout << setprecision(10) <<ans << endl;
}