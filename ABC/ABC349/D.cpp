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
using P = pair<ll, ll>;

int main(void)
{
	vector<P> ans;
	ll L,R;
	cin >> L >> R;
	ll now = L;
	if(L==0)
	{
		// cout << 0 << " ";
		ll pre = 0;
		ll next_R = 1;
		while(next_R<=R)
		{
			next_R *= 2;
			pre++;
		}
		next_R/=2;
		pre--;
		// cout << (ll)pow(2,pre)<<endl;
		now = next_R;
		ans.push_back(make_pair(0,now));
	}

		while(now<R)
		{
			ll now_ana=now;
			ll fir = now;
			// cout << now << " ";
			ll pre=0;
			while(now_ana%2==0)
			{
				now_ana/=2;
				pre+=1;
			}
			while(now+(ll)pow(2,pre)>R)
				pre--;
			now+=(ll)pow(2,pre);
			// cout << now << endl;
			ans.push_back(make_pair(fir,now));
		}
	cout << ans.size() << endl;
	rep(i,0,ans.size())
		cout << ans[i].first << " " << ans[i].second << endl;
	
	return(0);
}