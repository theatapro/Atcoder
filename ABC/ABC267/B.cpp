#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	string S;
	cin >> S;

	vector<char> list(10);
	rep(i, 0, 10)
		list.at(i) = S[i];
	//1
	if (list[0] == '1')
	{
		cout << "No" << endl;
		return (0);
	}
	//4
	if(list[3] == '0')
	{
		if(list[6] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		if(list[1] == '0'&&list[2] == '0'&&list[4] == '0'&&list[5] == '0'&&list[7] == '0'&&list[8] == '0'&&list[9] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		else
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	//2,8
	if(list[1] == '0' && list[7] == '0')
	{
		if(list[3] == '0' && list[6] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		if(list[2] == '0'&&list[4] == '0'&&list[5] == '0'&&list[8] == '0'&&list[9] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		else
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	//5
	if(list[4] == '0')
	{
		if(list[1] == '0' && list[3] == '0'&& list[6] == '0'&& list[7] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		if(list[2] == '0'&&list[5] == '0'&&list[8] == '0'&&list[9] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		else
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	//3,9
	if(list[2] == '0' && list[8] == '0')
	{
		if(list[5] == '0' && list[9] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		if(list[1] == '0'&&list[3] == '0'&&list[4] == '0'&&list[6] == '0'&&list[7] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		else
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	//6
	if(list[5] == '0')
	{
		if(list[9] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		if(list[1] == '0'&&list[2] == '0'&&list[3] == '0'&&list[4] == '0'&&list[7] == '0'&&list[8] == '0'&&list[6] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		else
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}