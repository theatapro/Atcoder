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
# define PI 3.14159265359


using namespace std;
using P = pair<double, double>;

int main(void)
{
int N,Q;
cin >> N >> Q;
vector<P> pos(N);
vector<double> theata(N);

rep(i,0,N){
	cin >> pos[i].first>>pos[i].second;
	double X= pos[i].first;
	double Y = pos[i].second;
	// if(pos[i].first==0){
	// 	if(Y>=0) theata[i]=INF+10;
	// 	else theata[i]=-INF-10;
	// }
	// else{
	theata[i]=atan(Y/X);
	if(theata[i]<0 && Y<0) theata[i]+=2*PI;
	if(theata[i]<0 && X<0) theata[i]+=PI;
	if(theata[i]==-0 && X<0) theata[i]+=PI;


	// if(theata[i]>=0 && pos[i].first<0)
	// 	theata[i]+=PI/2;
	// if(theata[i]<0 && pos[i].second<0)
	// 	theata[i]+=PI/2;
	// }
}
sort(theata.begin(),theata.end());
vector<int> sum;
vector<double> info;

double pre = theata[0];
sum.push_back(1);
info.push_back(pre);
int index=0;
rep(i,1,N){
	double now = theata[i];
	if(now==pre) sum[index]++;
	else{
		info.push_back(now);
		index++;
		sum.push_back(1);
		pre =now;
	}
}
vector<int> sum_sum;
sum_sum.push_back(sum[0]);
rep(i,1,sum.size())
	sum_sum[i]=sum_sum[i-1]+sum[i];
rep(i,0,Q){
	double A,B;
	cin >> A >>B;
	double the=atan(B/A);
	if(the<0 && B<0) the+=2*PI;
	if(the<0 && A<0) the+=PI;
	if(the==-0 && A<0) the+=PI;
	auto I =lower_bound(all(info),the);
	cout <<sum_sum[*I]<<endl;
}
// rep(i,0,info.size())
// 	cout <<  info[i] <<endl;


return(0);
}