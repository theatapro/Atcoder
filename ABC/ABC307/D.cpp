#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

int	main(void)
{
	int N;
	string S;
	cin >> N >> S;
	vector<bool> is_remain(N,true);
	stack<int> st;
	int pre_from = INF;
	int pre_to = INF;

	rep(i,0,N)
	{
		if(S[i]=='(')
		{
			st.push(i);
		}
		else if(S[i]==')' && !st.empty())
		{
			int from = st.top();
			int to = i;
			// cout << from << " "<<to<<endl;
			st.pop();
			if(pre_from!=INF && (from<pre_from && to>pre_to))
			{
				rep(k,from,pre_from)
					is_remain[k] = false;
				rep(k,pre_to,to+1)
					is_remain[k] = false;
			}
			else
				rep(k,from,to+1)
					is_remain[k] = false;
			pre_from = from;
			pre_to = to;
		}
	}
	rep(i,0,N)
	{
		if(is_remain[i])
			cout << S[i];
	}
	return(0);
	
}
