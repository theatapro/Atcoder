#include <bits/stdc++.h>
#define rep(i, l, r) for (long long i = (l); i < (r); i++)

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

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
    ll L, R;
    cin >> L >> R;
    ll ans = 0;

    for(ll i = R - L; i > 0 ; i--)
    {
        bool bre = false;
        ll k = (R - L) - i + 1;
        while(k > 0)
        {
            if(my_gcd(L + (k - 1), L + (k - 1) + i) == 1)
            {
                ans = i;
                bre = true;
                break;
            }
            k--;
        }
        if(bre)
            break;
    }

    cout << ans << endl;
}