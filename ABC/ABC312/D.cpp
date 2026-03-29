#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int	main(void)
{
	int N_1, N_2, M;
	cin >> N_1 >> N_2 >> M;
	vector<vector<int> > G_1(N_1);
	vector<vector<int> > G_2(N_2);
	vector<int> dist_1(N_1, -1);
	vector<int> dist_2(N_2, -1);

	// vector<vector<int> > nodes(N);

	rep(i, 0, M)
	{
		int A, B;
		cin >> A >> B;
		if(A <= N_1)
		{
			A--;B--;
			G_1[A].push_back(B);
			G_1[B].push_back(A);
		}
		else
		{
			A-=N_1+1;B-=N_1+1;
			G_2[A].push_back(B);
			G_2[B].push_back(A);			
		}
	}

	queue<int> que_1;
	dist_1[0] = 0;
	que_1.push(0);

	int far_point_G1 = 0;
	int max_len_G1 = 0;

	while(!que_1.empty())
	{
		int v = que_1.front();
		que_1.pop();

		for(auto nv : G_1[v])
		{
			if(dist_1[nv] != -1)
				continue;
			else
			{
				dist_1[nv] = dist_1[v] + 1;
				max_len_G1 = max(max_len_G1,dist_1[nv]);
				// if(max_len==dist_1[nv])
				// 	far_point_G1 = nv + 1;
				que_1.push(nv);
			}
		}
	}

	queue<int> que_2;
	dist_2[N_2-1] = 0;
	que_2.push(N_2-1);

	int far_point_G2 = 0;
	int max_len_G2 = 0;
	while(!que_2.empty())
	{
		int v = que_2.front();
		que_2.pop();

		for(auto nv : G_2[v])
		{
			if(dist_2[nv] != -1)
				continue;
			else
			{
				dist_2[nv] = dist_2[v] + 1;
				max_len_G2 = max(max_len_G2,dist_2[nv]);
				// if(max_len==dist_2[nv])
				// 	far_point_G2 = nv + N_2;
				que_2.push(nv);
			}
		}
	}
	cout << max_len_G1 + max_len_G2 + 1 << endl;

	// cout << far_point_G1 << " " << far_point_G2 << endl;
	return(0);
	
}
