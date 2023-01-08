#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int main(void)
{
	char ch;
	vector<pair<int,int> > p_map;
	rep(i,0,9)
	{
		rep(j,0,9)
		{
			cin >> ch;
			if(ch == '#')
				p_map.push_back(make_pair(i,j));
		}
	}
	if(p_map.size() < 4)
	{
		cout << 0 <<endl;
		return(0);
	}
	int ans=0;
	int AB,AC,CD,DB,AD;

	rep(A, 0, p_map.size())
	{
		rep(B, A + 1, p_map.size())
		{
			rep(C, B+1, p_map.size())
			{
				rep(D, C+1, p_map.size())
				{
					AB = (abs(p_map[A].first - p_map[B].first))*(abs(p_map[A].first - p_map[B].first))
					+(abs(p_map[A].second - p_map[B].second))*(abs(p_map[A].second - p_map[B].second));
					AC = (abs(p_map[A].first - p_map[C].first))*(abs(p_map[A].first - p_map[C].first))
					+(abs(p_map[A].second - p_map[C].second))*(abs(p_map[A].second - p_map[C].second));
					CD = (abs(p_map[C].first - p_map[D].first))*(abs(p_map[C].first - p_map[D].first))
					+(abs(p_map[C].second - p_map[D].second))*(abs(p_map[C].second - p_map[D].second));
					DB = (abs(p_map[D].first - p_map[B].first))*(abs(p_map[D].first - p_map[B].first))
					+(abs(p_map[D].second - p_map[B].second))*(abs(p_map[D].second - p_map[B].second));	
					AD = (abs(p_map[D].first - p_map[A].first))*(abs(p_map[D].first - p_map[A].first))
					+(abs(p_map[D].second - p_map[A].second))*(abs(p_map[D].second - p_map[A].second));
					// cout << AB << " " << AC << " " << CD << " " << DB << endl;
					if(AB == AC && AC == CD && CD == DB)
						if(AD == AB + AC)
							ans++;								
				}
			}
		}
	}
	cout << ans<< endl;
}