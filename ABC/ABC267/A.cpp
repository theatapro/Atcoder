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
	if(S == "Monday")
		cout << 5 << endl;
	else if(S == "Tuesday")
		cout << 4 << endl;
	else if(S == "Wednesday")
		cout << 3 << endl;
	else if(S == "Thursday")
		cout << 2 << endl;
	else if(S == "Friday")
		cout << 1 << endl;
}