#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;


int	main(void)
{	
	int Q;
	int vol=0;
	bool play = false;
	cin >> Q;
	rep(i,0,Q){
		int A;
		cin >> A;
		if(A==1)
		{
			vol++;
		}
		if(A==2)
		{
			if(vol>=1)
				vol--;
		}
		if(A==3){
			if(play)
				play =false;
			else
				play=true;
		}
		if(vol>=3&&play)
			cout << "Yes"<<endl;
		else
			cout<< "No"<<endl;
	}

	return (0);
}