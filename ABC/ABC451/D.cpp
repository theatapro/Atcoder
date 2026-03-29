#include <bits/stdc++.h>
// #include <atcoder/all>
typedef long long ll;
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
#define all(a) (a).begin(), (a).end()
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }


const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
// using namespace atcoder;

using P = pair<ll, ll>;
// using mint = modint998244353;
#define ALL(a)  (a).begin(),(a).end()

ll get_dig(ll num){
	ll ret = 0;
	while(num!=0){
		num/=10;
		ret++;
	}
	return(ret);
}
int main(void)
{
	ll N;
	cin >> N;
	vector<ll> bi;
	vector<ll> ans;
	queue<ll> q;
	set<ll> se;

	rep(i,0,30){
		ll bi_num = pow(2,i);
		// ll bi_num_size = get_dig(bi_num);
		ans.push_back(bi_num);
		se.insert(bi_num);
		bi.push_back(bi_num);
		q.push(bi_num);
		// cout << parts <<endl;
	}
	while(!q.empty()){
		ll n1 = q.front();
		q.pop();
		for(auto n2:bi){
			ll n_new = stoll(to_string(n1)+to_string(n2));
			if(n_new>=INF) break;
			else{
				if(!se.count(n_new)){
					q.push(n_new);
					ans.push_back(n_new);
					se.insert(n_new);
				}
			}
		}
	}
	sort(all(ans));
	// rep(i,0,10){
		cout << ans[N-1] << endl;
	// }
	return(0);
}

// int main(void)
// {
// 	ll N;
// 	cin >> N;
// 	vector<P> bi;
// 	vector<ll> ans;
// 	queue<P> q;
// 	set<ll> se;

// 	rep(i,0,30){
// 		ll bi_num = pow(2,i);
// 		ll bi_num_size = get_dig(bi_num);
// 		ans.push_back(bi_num);
// 		se.insert(bi_num);
// 		bi.push_back({bi_num,bi_num_size});
// 		q.push({bi_num,bi_num_size});
// 		// cout << parts <<endl;
// 	}
// 	while(!q.empty()){
// 		ll n1 = q.front().first;
// 		ll n1_size = q.front().second;
// 		q.pop();
// 		for(auto n2:bi){
// 			ll n2_size = n2.second;
// 			ll new_size = n1_size+n2_size;
// 			if(new_size>=10) break;
// 			else{
// 				ll n_new = stoll(to_string(n1)+to_string(n2.first));
// 				if(!se.count(n_new)){
// 					q.push({n_new,new_size});
// 					ans.push_back(n_new);
// 					se.insert(n_new);
// 				}
// 			}
// 		}
// 	}
// 	sort(all(ans));
// 	// rep(i,0,10){
// 		cout << ans[N-1] << endl;
// 	// }
// 	return(0);
// }