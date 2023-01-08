#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using namespace atcoder;

using mint = modint998244353;

int	main(void)
{
	int H,W;
	int ans = 0;
	cin >> H >>W;
	dsu uf(H*W);
    auto f = [](int x){
        cout << x << endl;
    };
    f(3);
    uf.merge(1,2);
}