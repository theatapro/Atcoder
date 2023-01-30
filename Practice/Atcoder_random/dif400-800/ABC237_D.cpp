#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int,int>;

ll my_gcd(ll x, ll y)
{
    if(x % y == 0)
        return y;
    else
        return my_gcd(y, x % y);
}

ll my_lcm(ll x, ll y)
{
    return(x * y / my_gcd(x, y));
}

int main()
{
    int N;
	string S;
    cin >> N >> S;

	deque<int> deq;
	deq.push_back(N);

    for(int i = N - 1; i >= 0; i--)
	{
		if(S[i] == 'R')
			deq.push_front(i);
		else
			deq.push_back(i);
	}

	rep(i, 0, N + 1)
	{
		cout << deq.front() << " ";
		deq.pop_front();
	}

}