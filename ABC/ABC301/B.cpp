#include <bits/stdc++.h>
// #include <atcoder/all>
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
	vector<int> vec_A(N);


	rep(i,0,N)
		cin >> vec_A[i];

	rep(i,0,N-1)
	{
		int out = vec_A[i];
		if(abs(vec_A[i]-vec_A[i+1])>1 && vec_A[i] < vec_A[i+1])
			while(out < vec_A[i+1])
			{
				cout << out << " ";
				out++;
			}
		else if(abs(vec_A[i]-vec_A[i+1])>1 && vec_A[i] > vec_A[i+1])
			while(out > vec_A[i+1])
			{
				cout << out << " ";
				out--;
			}
		else
			cout << out << " ";
	}
	cout << vec_A[N - 1] << endl;;

	return(0);
	
}