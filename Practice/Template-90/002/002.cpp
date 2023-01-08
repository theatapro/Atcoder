#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)

using namespace std;

void	out(bitset<20> s, int N)
{
	for(int index = N - 1; index >= 0; index--)
	{
		if(s.test(index) == 1)
			cout << "(" ;
		else
			cout << ")";
		if(index == 0)
			cout << endl;
	}
}

int	main(void)
{
	int N;
	cin >> N;
	bitset<20> s;

	if (N % 2 != 0)
		return (0);
	for(int bit = (1<<N); bit >= 0; bit--)
	{
		bitset<20> s(bit);
		if(s.count() == N / 2)
		{
			int	sum = 0;
			int cnt = 0;
			for(int index = N - 1 ; index >= 0; index--)
			{
				if(sum < 0)
					break;
				else if (s.test(index))
					sum++;
				else
					sum --;
				cnt ++;
			}
			if (cnt == N)
			{
				out(s, N);
			}
		}
	}
}