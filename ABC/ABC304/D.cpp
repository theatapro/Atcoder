#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int	main(void)
{
	int W, H;
	cin >> W >> H;
	int N;
	cin >> N;
	vector<P> straw_vec(N);
	vector<P> straw_vec_inv(N);

	rep(i,0,N)
	{
		int x, y;
		cin >> x >> y;
		straw_vec[i].first = x;
		straw_vec[i].second = y;
		straw_vec_inv[i].first = y;
		straw_vec_inv[i].second = x;
	}
	sort(straw_vec.begin(),straw_vec.end());
	sort(straw_vec_inv.begin(),straw_vec_inv.end());

	int A;
	cin >> A;
	vector<int> A_vec(A);
	rep(i,0,A)
		cin >> A_vec[i];
	int B;
	cin >> B;
	vector<int> B_vec(B);
	rep(i,0,B)
		cin >> B_vec[i];
	
	int ans_min = INF;

	vector<int> A_num(A+1);
	int index = 0;
	int A_index = 0;
	set<int> check_A;
	vector<set<int>> check_straw_A(A+1);
	rep(i,0,A+1)
	{
		while(straw_vec[index].first < A_vec[A_index])
		{
			A_num[i]++;
			check_straw_A[i].insert(index);
			index++;
		}
		if (A_num[i] < B)
			ans_min = 0;
		else
			check_A.insert(i);
		A_index++;
	}

	vector<int> B_num(B+1);
	int index = 0;
	int B_index = 0;
	set<int> check_B;
	vector<set<int>> check_straw_B(B+1);
	rep(i,0,B+1)
	{
		while(straw_vec_inv[index].first < B_vec[B_index])
		{
			B_num[i]++;
			check_straw_B[i].insert(index);
			index++;
		}
		if (B_num[i] < B)
			ans_min = 0;
		else
			check_B.insert(i);
		B_index++;
	}

	int ans_max = 0;
	vector<vector<P> > check_AB(check_A.size());
	int AB_index = 0;
	for(auto n: check_A)
	{
		for(auto p:check_straw_A[n])
			check_AB[AB_index].push_back(make_pair(straw_vec[p].second, straw_vec[p].first));
		AB_index++;
	}

	rep(i,0,check_AB.size())
		sort(check_AB[i].begin(),check_AB[i].end());

	rep(i,0,check_AB.size())
	{
		rep(j,0,check_AB[i].size())
		{
			;
		}

	}

	return(0);
	
}
