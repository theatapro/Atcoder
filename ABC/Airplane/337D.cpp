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
// using namespace atcoder;
using P = pair<int, int>;
// using mint = modint1000000007;

struct cnt{
	int o_cnt=0;
	int x_cnt=0;
};

long long pow_long(long long a, long long b)
{
	long long ret = 1;
	for(long long i = 0;i<b;i++)
		ret*=a;
	return(ret);
}

bool is_valid_yoko(int j, int W, int K)
{
	if(j+K<=W)
		return(true);
	return(false);
}

bool is_valid_tate(int i, int H, int K)
{
	if(i+K<=H)
		return(true);
	return(false);
}

// int count_maru_yoko(int i,int j,int K,vector<vector<char> > &test)
// {
// 	int ret=0;
// 	for(int x = j;x<j+K;x++)
// 	{
// 		if(test[i][x]=='o')
// 			ret++;
// 		else if(test[i][x]=='x')
// 			return(-1);
// 	}
// 	return(ret);
// }

// int count_maru_tate(int i,int j,int K,vector<vector<char> > &test)
// {
// 	int ret=0;
// 	for(int y = i;y<i+K;y++)
// 	{
// 		if(test[y][j]=='o')
// 			ret++;
// 		else if(test[y][j]=='x')
// 			return(-1);
// 	}
// 	return(ret);
// }

int	main(void)
{	
	int H,W,K;
	cin >>H >> W>>K;
	vector<vector<char> > test(H,vector<char>(W));
	vector<vector<cnt> > yoko_info(H,vector<cnt>(W));
	vector<vector<cnt> > tate_info(H,vector<cnt>(W));

	rep(i,0,H)rep(j,0,W)
		cin >> test[i][j];
	int ans = INF;
	//yoko
	rep(i,0,H)
	{
		int o_cnt = 0;
		int x_cnt = 0;
		rep(j,0,W)
		{
			if(j<K)
			{
				if(test[i][j]=='o')
					o_cnt++;
				if(test[i][j]=='x')
					x_cnt++;
				if(j==K-1)
				{
					yoko_info[i][j-K+1].o_cnt=o_cnt;
					yoko_info[i][j-K+1].x_cnt=x_cnt;
				}
				
			}
			else
			{
				if(test[i][j]=='o')
					o_cnt++;
				if(test[i][j]=='x')
					x_cnt++;
				if(test[i][j-K]=='o')
					o_cnt--;
				if(test[i][j-K]=='x')
					x_cnt--;
				yoko_info[i][j-K+1].o_cnt=o_cnt;
				yoko_info[i][j-K+1].x_cnt=x_cnt;
			}
		}
	}


	//tate
	rep(i,0,W)
	{
		int o_cnt = 0;
		int x_cnt = 0;
		rep(j,0,H)
		{
			if(j<K)
			{
				if(test[j][i]=='o')
					o_cnt++;
				if(test[j][i]=='x')
					x_cnt++;
				if(j==K-1)
				{
					tate_info[j-K+1][i].o_cnt=o_cnt;
					tate_info[j-K+1][i].x_cnt=x_cnt;
				}
				
			}
			else
			{
				if(test[j][i]=='o')
					o_cnt++;
				if(test[j][i]=='x')
					x_cnt++;
				if(test[j-K][i]=='o')
					o_cnt--;
				if(test[j-K][i]=='x')
					x_cnt--;
				tate_info[j-K+1][i].o_cnt=o_cnt;
				tate_info[j-K+1][i].x_cnt=x_cnt;
			}
		}
	}

	rep(i,0,H)rep(j,0,W)
	{
		if(is_valid_yoko(j,W,K) && yoko_info[i][j].x_cnt==0)
			ans = min(ans,K-yoko_info[i][j].o_cnt);
		if(is_valid_tate(i,H,K) && tate_info[i][j].x_cnt==0)
		{
			ans = min(ans,K-tate_info[i][j].o_cnt);
			// cout << i << " " << j << " " << tate_info[i][j].o_cnt << endl;
		}
	}
	if(ans>=K+1)
	{
		cout <<-1<<endl;
		return(0);
	}
	cout << ans <<endl;
	return(0);
}