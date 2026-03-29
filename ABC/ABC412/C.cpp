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
const int DIV = 1e8;

using namespace std;
using P = pair<ll, ll>;

int	main(void)
{	
	int T;
	cin >> T;
	rep(i,0,T)
	{
		int N;	cin >> N;
		vector<int> A(N-2);
		int ini,last;
		cin >> ini;
		rep(j,0,N-2)
			cin >> A[j];
		cin >> last;

		if(ini*2>=last)
		{
			cout << 2 << endl;
			continue;
		}else if(N==2&&ini*2<last)
		{
			cout << -1 << endl;
			continue;
		}

		sort(A.begin(),A.end());
		int now = ini;
		int index = 0;
		//Aの最大値がlastを倒せない場合は−１
		if(2*A[N-3]<last){
			cout << -1 << endl;
		}
		else{
		//二分探索でnow２倍を超えない最大値を取得。それがnowと同じ値なら−１。もしそれがLASTを倒せるならそこで打ち切る。
		//lower_boundは、ソートされた配列内で、key以上の要素の内の一番左側のイテレータを返す
			while(2*now<last)
			{
				index++;
				int new_now = A[upper_bound(A.begin(),A.end(),2*now) - A.begin()-1];
				// cout << upper_bound(A.begin(),A.end(),2*now) - A.begin();
	
				// cout << new_now;
				if(2*new_now>=last)
				{
					cout << index+2 <<endl;
					break;
				}
				if(new_now==now)
				{
					cout << -1 << endl;
					break;
				}
				now = new_now;
			}
		}
	}
	return(0);
}