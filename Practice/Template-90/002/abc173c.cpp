#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace  std;

int count_black(vector< vector<char> >	list)
{
	int cnt = 0;
	int H = list.size();
	int W = list.at(0).size();

	rep(i, 0, H)
		rep(j, 0, W)
			if (list.at(i).at(j) == '#')
				cnt++;
	return (cnt);
}

int main(void)
{
	int H, W, K;
	cin >> H >> W >> K;
	vector< vector<char> >	list(H, vector<char>(W));

	//i:0->H, j:0->W
	rep(i, 0, H)
		rep(j, 0, W)
			cin >> list.at(i).at(j);

	vector< vector<char> >	copy_list(H, vector<char>(W));
	int ans = 0;
	rep(bit, 0, 1<<(H + W))
	{
		rep(h, 0, H)
			rep(w, 0, W)
				copy_list.at(h).at(w) = list.at(h).at(w);
		
		bitset<13> bit_list(bit);
		rep(index_H, 0, H)
		{
			if(bit_list.test(index_H))
				rep(index_W, 0, W)
					copy_list.at(index_H).at(index_W) = 'R';
		}
		rep(index_W, H, W + H)
		{
			if(bit_list.test(index_W))
				rep(index_H, 0, H)
					copy_list.at(index_H).at(index_W - H) = 'R';
		}

		if(count_black(copy_list) == K)
			ans++;
	}
	cout << ans << endl;
}
