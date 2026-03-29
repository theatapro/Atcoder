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
// using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()

//下から見ていく。Q->1
// ３ Xを探す：３　Xがあったら次の操作へ。　なかったら何もしない
// 1 Xを探す：1 Xがあったら、それまでに2 Xがあれば答えの文字列の前に追加。1 X がなかったら追加しない
// 3 Yを見つける

struct Query
{
	int q;
	int p;
	string s;/* data */
};

int main(void)
{
	int N,Q;
	cin >> N >>Q;
	vector<Query> history(Q);
	rep(i,0,Q)
	{
		int a;
		cin >> a;
		history[i].q = a;
		if(a==2)
		{
			int p;
			string s;
			cin >> p >>s;
			history[i].p=p;
			history[i].s=s;
		}
		else
		{
			int p;
			cin >> p;
			history[i].p=p;
		}
	}

	string ans ="";
	string ini_ans ="";

	int now = Q-1;
	while(now>=0)
	{
		if(history[now].q==3)
		{
			int pc = history[now].p;
			string add_s;
			int check_now = now;
			for(int i=check_now-1;i>=0;i--)
			{
				if(history[i].p==pc && history[i].q==2)
					add_s = history[i].s+add_s;
				if(history[i].p==pc && history[i].q==1)
				{
					ans = add_s + ans;
					break;
				}
				now = i+1;
			}
			ini_ans = add_s;
		}
		now--;
	}
	cout << ini_ans+ ans <<endl;
	return(0);
}