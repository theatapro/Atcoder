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
	cin >> N;
	vector<P> time_vec(N);
	int zero;
	cin >> zero;
	rep(i,0,N/2)
	{
		int A_1,A_2;
		cin >> A_1 >> A_2;
		time_vec[i].first = A_1;
		time_vec[i].second = A_2;
	}
	vector<ll> sum(N/2);
	sum[0]=time_vec[0].second - time_vec[0].first;
	rep(i,1,N/2)
		sum[i] = sum[i-1]+time_vec[i].second - time_vec[i].first;
	
	vector<int> find_for_st(N/2);
	vector<int> find_for_end(N/2);
	rep(i,0,N/2)
	{
		find_for_st[i] = time_vec[i].second;
		find_for_end[i] = time_vec[i].first;
	}
	int Q;
	cin >> Q;
	rep(i,0,Q)
	{
		ll st, end;
		cin >> st >> end;
		auto st_position = lower_bound(find_for_st.begin(),find_for_st.end(),st);
		auto end_position = upper_bound(find_for_end.begin(),find_for_end.end(),end);
		cout << *st_position << " "<<*end_position << endl;
	}

	return(0);
	
}
