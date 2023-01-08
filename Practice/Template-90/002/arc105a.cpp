#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(void)
{
	ll A, B, C, D;
	cin >> A >> B >> C >> D;

	for(int bit = 0;bit < (1<<4); bit ++)
	{
		bitset<4> s(bit);
		ll get_sum = 0;
		ll remain_sum = 0;

		if(s.test(3))
			get_sum += A;
		else
			remain_sum += A;
		if(s.test(2))
			get_sum += B;
		else
			remain_sum += B;
		if(s.test(1))
			get_sum += C;
		else
			remain_sum += C;
		if(s.test(0))
			get_sum += D;
		else
			remain_sum += D;
		if(get_sum == remain_sum)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}
