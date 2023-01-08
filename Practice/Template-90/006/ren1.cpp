#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)
using namespace std;

int main(void)
{
	int X, A, B, C, D;
	cin >> X >> A >> B >> C >> D;
	int ans = 0;
	while(true)
	{
		if(X - 50 < 0 || A == 0)
			break;
		X -= 50;
		A --;
		ans++;
	}
	while(true)
	{
		if(X - 10 < 0 || B == 0)
			break;
		X -= 10;
		B --;
		ans++;
	}
	while(true)
	{
		if(X - 5 < 0 || C == 0)
			break;
		X -= 5;
		C --;
		ans++;
	}
	while(true)
	{
		if(X - 1 < 0 || D == 0)
			break;
		X -= 1;
		D --;
		ans++;
	}
	cout << ans << endl;
}
