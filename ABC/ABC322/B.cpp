#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

bool setsubi(string S,string T)
{
	// bool ret = true;
	rep(i,0,S.size())
	{
		if(T[T.size()-1-i]!=S[S.size()-1-i])
			return(false);
	}
	return(true);
}

bool settou(string S,string T)
{
	// bool ret = true;
	rep(i,0,S.size())
	{
		if(T[i]!=S[i])
			return(false);
	}
	return(true);
}
int	main(void)
{
	int N,M;
	string S,T;
	cin >> N >> M >> S >>T;
	if(settou(S,T)&&setsubi(S,T))
	{
		cout << 0 << endl;
		return(0);
	}
	if(settou(S,T)&&(!setsubi(S,T)))
	{
		cout << 1 << endl;
		return(0);
	}
	if((!settou(S,T))&&setsubi(S,T))
	{
		cout << 2 << endl;
		return(0);
	}
	cout << 3 <<endl;
	return(0);
}