#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 998244353;

using namespace std;
using P = pair<int, int>;


int main(void)
{
	int N,Q;
	cin >> N >> Q;
	map<int,vector<int> > box;
	map<int,set<int> > card;

	// vector<vector<char> > vec(H,vector<char>(W));
	rep(i,0,Q)
	{
		int q;
		cin >> q;
		if(q==1)
		{
			int i,j;
			cin >> i >> j;
			box[j].push_back(i);
			// cout << "# ###"<< box[j].size() << endl;
			card[i].insert(j);
		}
		else if(q==2)
		{
			int i;
			cin >>i;
			// cout << "# ###"<< box[i].size() << endl;
			sort(box[i].begin(),box[i].end());
			rep(j,0,box[i].size())
				cout << box[i][j] << " ";
			cout << endl;
		}
		else if(q==3)
		{
			int i;
			cin >>i;
			set<int> out = card[i];
			while(!out.empty())
			{
				cout <<*begin(out)<< " ";
				out.erase(*begin(out));
			}
			cout <<endl;
		}
	}
		
	return(0);
}
