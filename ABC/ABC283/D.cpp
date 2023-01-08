#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;

int	main(void)
{
	string S;
	cin >> S;
    set<char> al;

    rep(i, 0, S.size())
    {
        while(S.at(i) != ')')
        {
            al.insert(A.at(i));
            if(al.count(A.at(i)))
            {
                cout << "No" << endl;
                return(0);
            }
            i++;
        }
    }
    

	return(0);
}
