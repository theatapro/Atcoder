#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	ll N;
	cin >> N;
	vector<ll> list(N);
	rep(i, 0, N)
		cin >> list.at(i);
	ll Q;
	cin >> Q;
	map<ll,ll> sum;

	int x1 = 0;
	int flag = 0;
	queue<int> check;

	rep(i, 0, Q)
	{
		int T;
		cin >> T;

		if(T == 1)
		{
			cin >> x1;
			flag = 1;
			rep(i,0,N)
				if(sum.count(i))
					sum.erase(i);
		}
		if(T == 2)
		{
			int ai;
			int addi;
			cin >> ai >> addi;
			ai--;
			if(flag)
			{
				if(!sum.count(ai))
					sum[ai] = 0;
				sum.at(ai) += addi;
			}
			else
				list.at(ai) += addi;
		}
		if(T == 3)
		{
			int id;
			cin >> id;
			id--;
			if(flag)
			{
				if(sum.count(id))
					cout << x1 + sum.at(id) << endl;
				else
					cout << x1 << endl;
			}
			else
				cout << list.at(id) << endl;
		}
	}
}