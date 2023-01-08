#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;


int main(void)
{
	int N, Q;
	cin >> N >> Q;
	map<int, set<int> > follow_list;

	rep(i, 0, Q)
	{
		int T;
		cin >> T;

		int A,B;
		if(T == 1)
		{
			cin >> A >> B;
			follow_list[A].insert(B);
		}
		if(T == 2)
		{
			cin >> A >> B;
			follow_list[A].erase(B);
		}
		if(T == 3)
		{
			cin >> A >>B;
			if(follow_list[A].count(B) && follow_list[B].count(A))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
}
