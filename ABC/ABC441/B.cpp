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
	int N,M;
	string S,T;
	int Q;
	cin >> N >> M >> S >>T>>Q;
	rep(i,0,Q){
		string w;
		cin >> w;
		bool Ta = false;
		bool Ta_c = false;
		bool Ao = false;
		bool Ao_c = false;

		
		int w_len = 0;
		rep(j,0,w.size()){
			Ta_c =false;
			rep(k,0,S.size()){
				if(w[j]==S[k]) {Ta_c=true; break;}
			}
			if(Ta_c) w_len++;
		}
		if(w_len == w.size()) Ta=true;

		w_len = 0;
		rep(j,0,w.size()){
			Ao_c = false;
			rep(k,0,T.size()){
				if(w[j]==T[k]) {Ao_c=true; break;}
			}
			if(Ao_c) w_len++;
		}
		if(w_len == w.size()) Ao=true;

		if(Ao&&!Ta) cout << "Aoki"<<endl;
		else if(!Ao&&Ta) cout << "Takahashi"<<endl;
		else cout << "Unknown"<<endl;
	}
	return (0);
}