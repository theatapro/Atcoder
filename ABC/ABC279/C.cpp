#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int main(void)
{
	int H, W;
	cin >> H >> W;
	map<string, int> st_list;
	vector<string> R(W);
	vector<string> XR(W);

	rep(i, 0, H)
	{
		rep(j, 0, W)
		{
			char a;
			cin >> a;
			R[j] += a;
		}
		if(i == H - 1)
		{

		}
	}

	rep(i,0,W)
	{
		if(st_list.count(R[i]))
			st_list[R[i]]++;
		else
			st_list[R[i]] = 1;
	}

	rep(i, 0, H)
	{
		rep(j, 0, W)
		{
			char a;
			cin >> a;
			XR[j] += a;
		}
	}

	rep(i,0,W)
	{
		if(st_list.count(XR[i]))
		{
			st_list[XR[i]]--;
			if(st_list[XR[i]] == 0)
				st_list.erase(XR[i]);
		}
		else
		{
			cout << "No" <<endl;
			return(0);
		}
	}
	cout << "Yes" << endl;

	// cout << R[0] << endl;

	// 	int A,B;
	// 	if(T == 1)
	// 	{
	// 		cin >> A >> B;
	// 		follow_list[A].insert(B);
	// 	}
	// 	if(T == 2)
	// 	{
	// 		cin >> A >> B;
	// 		follow_list[A].erase(B);
	// 	}
	// 	if(T == 3)
	// 	{
	// 		cin >> A >>B;
	// 		if(follow_list[A].count(B) && follow_list[B].count(A))
	// }
}
