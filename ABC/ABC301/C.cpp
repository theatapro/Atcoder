#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;

bool check_atcoder(char c)
{
	if(c == 'a' || c == 't' ||c == 'c' ||c == 'o' ||c == 'd' ||c == 'e' ||c == 'r')
		return(true);
	return(false);
}

int main(void)
{
	string S,T;
	cin >> S >> T;
	map<char, int> S_map;
	map<char, int> T_map;

	rep(i,0,S.size())
		S_map[S[i]]++;
	rep(i,0,T.size())
		T_map[T[i]]++;

	rep(i,0,T.size())
	{
		// cout << "de:" <<  S_map['@']<< endl;
		if(T[i]=='@')
			continue;

		if(S_map[T[i]]<=0 && check_atcoder(T[i]))
			S_map['@']--;
		else
			S_map[T[i]]--;
		if(S_map['@'] < 0 || S_map[T[i]] < 0)
		{
			cout << "No" << endl;
			return(0);
		}
	}
	rep(i,0,S.size())
	{
		// cout << "de:" <<  T_map['@']<< endl;

		if(S[i]=='@')
			continue;

		if(T_map[S[i]]<=0 && check_atcoder(S[i]))
			T_map['@']--;
		else
			T_map[S[i]]--;
		if(T_map['@'] < 0 || T_map[S[i]] < 0)
		{
			cout << "No" << endl;
			return(0);
		}
	}
	cout << "Yes" << endl;
	
	return(0);
}
