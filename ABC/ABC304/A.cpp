#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{
	int N;
	cin >> N;
	vector<string> S(N);
	int min_age = INF+1;
	int index = 0;
	rep(i,0,N)
	{
		int age;
		cin >> S[i] >> age;
		min_age = min(age, min_age);
		if(min_age==age)
			index = i;
	}
	rep(i,index,N)
		cout << S[i] << endl;
	rep(i,0,index)
		cout << S[i] << endl;
;	return(0);
}